#ifndef NUMBERCALCULATOR_H
#define NUMBERCALCULATOR_H

#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QRadioButton>

class NumberCalculator : public QDialog
{
    Q_OBJECT
public:
    NumberCalculator(QWidget* parent = nullptr);

public slots:
    void TextChangedEdit1(const QString& str);
    void TextChangedEdit2(const QString& str);

    void RadioToggled1(bool);
    void RadioToggled2(bool);
    void RadioToggled3(bool);
    void RadioToggled4(bool);
    void RadioToggled5(bool);
    void RadioToggled6(bool);

    void DoCompute();
    void DoClear();

private:

    QLineEdit* pInputBox1;
    QLineEdit* pInputBox2;

    QLabel* pLabelOperator;
    QLabel* pLabelResult;
    QLabel* pLabelInfo;
    QLabel* pLabelTitle;

    QPushButton* pButtonClear;
    QPushButton* pButtonAssignment;
    QPushButton* pButtonClose;

    QRadioButton* pRadioAdd;
    QRadioButton* pRadioSub;
    QRadioButton* pRadioDiv;
    QRadioButton* pRadioMul;
    QRadioButton* pRadioMod;
    QRadioButton* pRadioPow;

    QHBoxLayout* pLayoutExpr;
    QHBoxLayout* pLayoutButtons;

    QVBoxLayout* pLayoutOperators;
    QVBoxLayout* pMainLayout;

    int a;
    int b;
    int res;
    char op;


};

#endif // NUMBERCALCULATOR_H
