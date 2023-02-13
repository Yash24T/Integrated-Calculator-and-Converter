#ifndef STANDARDWINDOW_H
#define STANDARDWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QDialog>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "columbcalculator.h"
#include "gravititionalcalculator.h"
#include "quadraticcalculator.h"

class SolverStandardDialog : public QDialog
{
    Q_OBJECT
public:
    explicit SolverStandardDialog(QWidget *parent = nullptr);

public slots:
    void quadraticButton();
    void columbButton();
    void gravitionalButton();
    void aboutButton();
    void openallButton();

private:
    QPushButton* pQuadraticButton;
    QPushButton* pColumbButton;
    QPushButton* pGravitionalButton;
    QPushButton* pCancelButton;
    QPushButton* pAboutButton;
    QPushButton* pOpenallButton;

    QLabel* pAboutLabel;
    QLabel* pTitleLabel;

    QHBoxLayout* pButtonSet1;
    QHBoxLayout* pButtonSet2;
    QVBoxLayout* pButtonLayout;

    QVBoxLayout* MainLayout;

    quadraticcalculator*     pQuadraticDialog;
    columbcalculator*        pColumbDialog;
    gravititionalcalculator* pGravityDialog;

};

#endif // STANDARDWINDOW_H
