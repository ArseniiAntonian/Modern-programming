#include "calculatorform.h"
#include "ui_calculatorform.h"

CalculatorForm::CalculatorForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalculatorForm)
{
    ui->setupUi(this);
}

CalculatorForm::~CalculatorForm()
{
    delete ui;
}
