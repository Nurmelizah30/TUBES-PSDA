#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>
#include <algorithm>
#include "mainwindow.h"
#include "globaldata.h"

admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    updateDisplay();
}

admin::~admin()
{
    delete ui;
}

int admin::binarySearch(const QString &isbn)
{
    int low = 0;
    int high = daftarBuku.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (daftarBuku[mid].isbn == isbn) {
            return mid;
        } else if (daftarBuku[mid].isbn < isbn) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

void admin::updateDisplay()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(daftarBuku.size());
    ui->tableWidget->setColumnCount(4);
    QStringList headers = {"ISBN", "Nama", "Pengarang", "Tahun"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    for (int i = 0; i < daftarBuku.size(); ++i) {
        const Buku &b = daftarBuku[i];

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(b.isbn));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(b.nama));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(b.pengarang));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(b.tahun));
    }
}

void admin::on_pushButton_Tambah_clicked()
{
    Buku buku;
    buku.isbn = ui->lineEdit->text().trimmed();
    buku.nama = ui->lineEdit_2->text().trimmed();
    buku.pengarang = ui->lineEdit_3->text().trimmed();
    buku.tahun = ui->lineEdit_4->text().trimmed();

    if (buku.isbn.isEmpty()) {
        QMessageBox::warning(this, "Peringatan", "ISBN tidak boleh kosong!");
        return;
    }

    daftarBuku.append(buku);
    std::sort(daftarBuku.begin(), daftarBuku.end(), [](const Buku &a, const Buku &b) {
        return a.isbn < b.isbn;
    });

    updateDisplay();
}

void admin::on_pushButton_Search_clicked()
{
    QString isbnCari = ui->lineEdit_5->text().trimmed();
    int index = binarySearch(isbnCari);

    if (index != -1) {
        const Buku &b = daftarBuku[index];
        QString info = "ISBN: " + b.isbn + "\nNama: " + b.nama + "\nPengarang: " + b.pengarang + "\nTahun: " + b.tahun;
        QMessageBox::information(this, "Buku Ditemukan", info);
    } else {
        QMessageBox::information(this, "Hasil", "Buku tidak ditemukan.");
    }
}

void admin::on_pushButton_Edit_clicked()
{
    QString isbnEdit = ui->lineEdit_5->text().trimmed();
    int index = binarySearch(isbnEdit);

    if (index != -1) {
        daftarBuku[index].nama = ui->lineEdit_6->text().trimmed();
        daftarBuku[index].pengarang = ui->lineEdit_7->text().trimmed();
        daftarBuku[index].tahun = ui->lineEdit_8->text().trimmed();

        updateDisplay();
    } else {
        QMessageBox::information(this, "Info", "Buku dengan ISBN tersebut tidak ditemukan.");
    }
}

void admin::on_pushButton_Delete_clicked()
{
    QString isbnDelete = ui->lineEdit_5->text().trimmed();
    int index = binarySearch(isbnDelete);

    if (index != -1) {
        daftarBuku.removeAt(index);
        updateDisplay();
    } else {
        QMessageBox::information(this, "Info", "Buku tidak ditemukan.");
    }
}

void admin::on_pushButton_logout_clicked()
{
    MainWindow *mw = new MainWindow();
    mw->show();
    this->close();
}
