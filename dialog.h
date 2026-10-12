#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtWidgets>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog() override;
private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushButton;
    QPushButton* colorTextPushButton;
    QPushButton* errorPushButton;
    QPushButton* filePushButton;
    QPushButton* fontPushButton;
    QPushButton* inputPushButton;
    QPushButton* pagePushButton;
    QPushButton* progressPushButton;
    QPushButton* printPushButton;
private slots:
    void doPushBtn();
};

#endif // DIALOG_H