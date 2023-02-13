#ifndef QUADRATICCALCULATOR_H
#define QUADRATICCALCULATOR_H

#include <QDialog>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class quadraticcalculator : public QDialog
{
    Q_OBJECT
public:
    quadraticcalculator(QWidget* parent = nullptr);

public slots:
    void TextChangedLabel1(const QString& str);
    void TextChangedLabel2(const QString& str);
    void TextChangedLabel3(const QString& str);
    void DoCompute();

private:
    QLabel* pLabel1;
    QLabel* pLabel2;
    QLabel* pLabel3;
    QLabel* pLabel4;
    QLabel* pLabel5;
    QLabel* pLabel6;

    QLineEdit* pLineEdit1;
    QLineEdit* pLineEdit2;
    QLineEdit* pLineEdit3;

    QPushButton* pComputeButton;
    QPushButton* pCancelButton;

    QHBoxLayout* pEntry1;
    QHBoxLayout* pEntry2;
    QHBoxLayout* pEntry3;

    QVBoxLayout* pRightLayout;
    QVBoxLayout* pLeftLayout;

    QHBoxLayout* pMainLayout;

    int a;
    int b;
    int c;

    double root1;
    double root2;
};

#endif // QUADRATICCALCULATOR_H
