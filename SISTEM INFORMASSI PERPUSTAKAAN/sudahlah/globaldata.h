#ifndef GLOBALDATA_H
#define GLOBALDATA_H

#include <QString>
#include <QVector>

struct Buku {
    QString isbn;
    QString nama;
    QString pengarang;
    QString tahun;
};

extern QVector<Buku> daftarBuku;

#endif // GLOBALDATA_H
