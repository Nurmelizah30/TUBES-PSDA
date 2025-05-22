#include "user.h"
#include "ui_user.h"
#include "mainwindow.h"
#include "globaldata.h"

user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);

    // Tampilkan semua data saat user dibuka
    ui->tableWidget->setColumnCount(4);
    QStringList headers = {"ISBN", "Nama", "Pengarang", "Tahun"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setRowCount(daftarBuku.size());

    for (int i = 0; i < daftarBuku.size(); ++i) {
        const Buku &b = daftarBuku[i];
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(b.isbn));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(b.nama));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(b.pengarang));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(b.tahun));
    }
}

user::~user()
{
    delete ui;
}

int user::binarySearch(const QString &isbn)
{
    int left = 0;
    int right = daftarBuku.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (daftarBuku[mid].isbn == isbn) {
            return mid;
        } else if (daftarBuku[mid].isbn < isbn) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

void user::tampilkanHasil(int index)
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
    QStringList headers = {"ISBN", "Nama", "Pengarang", "Tahun"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    if (index >= 0) {
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0, 0, new QTableWidgetItem(daftarBuku[index].isbn));
        ui->tableWidget->setItem(0, 1, new QTableWidgetItem(daftarBuku[index].nama));
        ui->tableWidget->setItem(0, 2, new QTableWidgetItem(daftarBuku[index].pengarang));
        ui->tableWidget->setItem(0, 3, new QTableWidgetItem(daftarBuku[index].tahun));
        ui->label_status->setText("Buku ditemukan.");
    } else {
        ui->label_status->setText("Buku tidak ditemukan.");
    }
}

void user::on_pushButton_clicked()
{
    QString isbn = ui->label_status->text().trimmed();
    if (isbn.isEmpty()) {
        ui->label_status->setText("Masukkan ISBN terlebih dahulu.");
        return;
    }

    int index = binarySearch(isbn);
    tampilkanHasil(index);
}

void user::on_pushButton_2_clicked()
{
    close(); // Kembali ke main window
}
