#include "numbercalculator.h"
#include <cmath>

NumberCalculator::NumberCalculator(QWidget* parent) :
    QDialog(parent)
{
   a = 0;
   b = 0;
   pInputBox1 = new QLineEdit;
   pInputBox2 = new QLineEdit;

   pLabelOperator = new QLabel(tr(" "));
   pLabelResult = new QLabel(tr(" "));
   pLabelInfo = new QLabel(tr("Enter values above."));
   pLabelTitle = new QLabel(tr("Calculator"));

   pLabelInfo -> setFrameStyle(QFrame::Plain);
   pLabelTitle -> setFrameStyle(QFrame::Plain);

   pButtonClear = new QPushButton(tr("Clear"));
   pButtonAssignment = new QPushButton(tr(" = "));
   pButtonClose = new QPushButton(tr("Close"));

   pRadioAdd = new QRadioButton(tr("+"));
   pRadioSub = new QRadioButton(tr("-"));
   pRadioDiv = new QRadioButton(tr("/"));
   pRadioMul = new QRadioButton(tr("*"));
   pRadioMod = new QRadioButton(tr("%"));
   pRadioPow = new QRadioButton(tr("^"));

   QObject::connect(pInputBox1, SIGNAL(textChanged(QString)), this, SLOT(TextChangedEdit1(QString)));
   QObject::connect(pInputBox2, SIGNAL(textChanged(QString)), this, SLOT(TextChangedEdit2(QString)));

   QObject::connect(pRadioAdd, SIGNAL(toggled(bool)), this, SLOT(RadioToggled1(bool)));
   QObject::connect(pRadioSub, SIGNAL(toggled(bool)), this, SLOT(RadioToggled2(bool)));
   QObject::connect(pRadioDiv, SIGNAL(toggled(bool)), this, SLOT(RadioToggled3(bool)));
   QObject::connect(pRadioMul, SIGNAL(toggled(bool)), this, SLOT(RadioToggled4(bool)));
   QObject::connect(pRadioMod, SIGNAL(toggled(bool)), this, SLOT(RadioToggled5(bool)));
   QObject::connect(pRadioPow, SIGNAL(toggled(bool)), this, SLOT(RadioToggled6(bool)));

   QObject::connect(pButtonAssignment, SIGNAL(clicked()), this, SLOT(DoCompute()));
   QObject::connect(pButtonClear, SIGNAL(clicked()), this, SLOT(DoClear()));
   QObject::connect(pButtonClose, SIGNAL(clicked()), this, SLOT(close()));

   pLayoutButtons = new QHBoxLayout;
   pLayoutExpr = new QHBoxLayout;
   pLayoutOperators = new QVBoxLayout;
   pMainLayout = new QVBoxLayout;

   pLayoutOperators -> addWidget(pRadioAdd);
   pLayoutOperators -> addWidget(pRadioSub);
   pLayoutOperators -> addWidget(pRadioDiv);
   pLayoutOperators -> addWidget(pRadioMul);
   pLayoutOperators -> addWidget(pRadioMod);
   pLayoutOperators -> addWidget(pRadioPow);

   pLayoutButtons -> addWidget(pButtonClear);
   pLayoutButtons -> addWidget(pButtonClose);

   pLayoutExpr -> addWidget(pInputBox1);
   pLayoutExpr -> addWidget(pLabelOperator);
   pLayoutExpr -> addWidget(pInputBox2);
   pLayoutExpr -> addWidget(pButtonAssignment);
   pLayoutExpr -> addWidget(pLabelResult);

   pMainLayout -> addWidget(pLabelTitle);
   pMainLayout -> addLayout(pLayoutExpr);
   pMainLayout -> addLayout(pLayoutOperators);
   pMainLayout -> addLayout(pLayoutButtons);
   pMainLayout -> addWidget(pLabelInfo);

   setLayout(pMainLayout);
   setWindowTitle(tr("Calculator"));
}

void NumberCalculator::TextChangedEdit1(const QString& str)
{
    a = str.toDouble();
}

void NumberCalculator::TextChangedEdit2(const QString& str)
{
    b = str.toDouble();
}

void NumberCalculator::RadioToggled1(bool)
{
    if((pRadioAdd ->isChecked()) == true)
    {
        op = '+';
        pLabelOperator -> setText(tr(" + "));
        pLabelInfo -> setText(tr("Addition Operator Selected."));
    }
}

void NumberCalculator::RadioToggled2(bool)
{
    if((pRadioSub ->isChecked()) == true)
    {
        op = '-';
        pLabelOperator -> setText(tr(" - "));
        pLabelInfo -> setText(tr("Substraction Operator Selected."));
    }
}

void NumberCalculator::RadioToggled3(bool)
{
    if((pRadioDiv ->isChecked()) == true)
    {
        op = '/';
        pLabelOperator -> setText(tr(" / "));
        pLabelInfo -> setText(tr("Division Operator Selected."));
    }
}

void NumberCalculator::RadioToggled4(bool)
{
    if((pRadioMul ->isChecked()) == true)
    {
        op = '*';
        pLabelOperator -> setText(tr(" * "));
        pLabelInfo -> setText(tr("Multiplication Operator Selected."));
    }
}

void NumberCalculator::RadioToggled5(bool)
{
    if((pRadioMod ->isChecked()) == true)
    {
        op = '%';
        pLabelOperator -> setText(tr(" % "));
        pLabelInfo -> setText(tr("Modulus Operator Selected."));
    }
}

void NumberCalculator::RadioToggled6(bool)
{
    if((pRadioPow ->isChecked()) == true)
    {
        op = '^';
        pLabelOperator -> setText(tr(" ^ "));
        pLabelInfo -> setText(tr("Exponent Operator Selected."));
    }
}

void NumberCalculator::DoCompute()
{
    switch(op)
    {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '/':
            res = a / b;
            break;
        case '*':
            res = a * b;
            break;
        case '%':
            res = a % b;
            break;
        case '^':
            res = (int)pow((float)a, (float)b);
            break;
    }

    pLabelResult -> setNum(res);
    pLabelInfo -> setText(tr("Done."));

}

void NumberCalculator::DoClear()
{
    pInputBox1 ->clear();
    pInputBox2 ->clear();
    pLabelResult ->clear();
}
