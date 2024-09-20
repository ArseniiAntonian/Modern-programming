#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include <QWidget>

namespace Ui {
class CalculatorForm;
}

class CalculatorForm : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorForm(QWidget *parent = nullptr);
    ~CalculatorForm();

private:
    Ui::CalculatorForm *ui;
};

#endif // CALCULATORFORM_H
