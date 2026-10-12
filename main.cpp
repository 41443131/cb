#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setWindowTitle(QStringLiteral("內建對話盒展示"));
    w.show();
    return a.exec();
}