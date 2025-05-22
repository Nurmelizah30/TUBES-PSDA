#ifndef USER_H
#define USER_H

#include <QDialog>
#include "globaldata.h" // gunakan data global

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_pushButton_clicked();   // Tombol Search
    void on_pushButton_2_clicked(); // Tombol Kembali

private:
    Ui::user *ui;

    int binarySearch(const QString &isbn);
    void tampilkanHasil(int index);
};

#endif // USER_H
