#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_LoginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "1234") {
        emit loginSuccess();  // Отправляем сигнал об успешном логине
    }
}
