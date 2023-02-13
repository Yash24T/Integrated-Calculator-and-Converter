#include "lengthconverter.h"

LengthConverter::LengthConverter(QWidget* parent) :
    QDialog(parent)
{
    pLabelTitle = new QLabel(tr("Lenght Converter"));
    pLabelInfo = new QLabel(tr("Enter Value and Choose Unit : "));
    pLabelTo = new QLabel(tr("To"));
    pLabelFrom = new QLabel(tr("From"));

    pLabelTitle ->setFrameStyle(QFrame::Panel);

    pInputBox1 = new QLineEdit;
    pOutputBox1 = new QLineEdit;

    pEqualButton = new QPushButton(tr(" = "));
    pClear = new QPushButton(tr("Clear"));
    pClose = new QPushButton(tr("Close"));

    pButtonGroup1 = new QButtonGroup;
    pButtonGroup2 = new QButtonGroup;

    pMeter1 = new QRadioButton(tr("Meter"));
    pKiloMeter1 = new QRadioButton(tr("Kilometer"));
    pCentiMeter1 = new QRadioButton(tr("Centimeter"));
    pMilliMeter1 = new QRadioButton(tr("Millimeter"));
    pMicroMeter1 = new QRadioButton(tr("Micrometer"));
    pNanoMeter1 = new QRadioButton(tr("Nanometer"));
    pMile1 = new QRadioButton(tr("Mile"));
    pYard1 = new QRadioButton(tr("Yard"));
    pFoot1 = new QRadioButton(tr("Foot"));
    pInch1 = new QRadioButton(tr("Inch"));
    pLightYear1 = new QRadioButton(tr("LightYear"));

    pButtonGroup1 ->addButton(pMeter1);
    pButtonGroup1 ->addButton(pKiloMeter1);
    pButtonGroup1 ->addButton(pCentiMeter1);
    pButtonGroup1 ->addButton(pMilliMeter1);
    pButtonGroup1 ->addButton(pMicroMeter1);
    pButtonGroup1 ->addButton(pNanoMeter1);
    pButtonGroup1 ->addButton(pMile1);
    pButtonGroup1 ->addButton(pYard1);
    pButtonGroup1 ->addButton(pFoot1);
    pButtonGroup1 ->addButton(pInch1);
    pButtonGroup1 ->addButton(pLightYear1);

    pMeter2 = new QRadioButton(tr("Meter"));
    pKiloMeter2 = new QRadioButton(tr("Kilometer"));
    pCentiMeter2 = new QRadioButton(tr("Centimeter"));
    pMilliMeter2 = new QRadioButton(tr("Millimeter"));
    pMicroMeter2 = new QRadioButton(tr("Micrometer"));
    pNanoMeter2 = new QRadioButton(tr("Nanometer"));
    pMile2 = new QRadioButton(tr("Mile"));
    pYard2 = new QRadioButton(tr("Yard"));
    pFoot2 = new QRadioButton(tr("Foot"));
    pInch2 = new QRadioButton(tr("Inch"));
    pLightYear2 = new QRadioButton(tr("LightYear"));

    pButtonGroup2 ->addButton(pMeter2);
    pButtonGroup2 ->addButton(pKiloMeter2);
    pButtonGroup2 ->addButton(pCentiMeter2);
    pButtonGroup2 ->addButton(pMilliMeter2);
    pButtonGroup2 ->addButton(pMicroMeter2);
    pButtonGroup2 ->addButton(pNanoMeter2);
    pButtonGroup2 ->addButton(pMile2);
    pButtonGroup2 ->addButton(pYard2);
    pButtonGroup2 ->addButton(pFoot2);
    pButtonGroup2 ->addButton(pInch2);
    pButtonGroup2 ->addButton(pLightYear2);

    QObject::connect(pInputBox1, SIGNAL(textChanged(QString)), this, SLOT(TextChangedInputBox1(QString)));
    QObject::connect(pEqualButton, SIGNAL(clicked()), this, SLOT(DoCompute()));
    QObject::connect(pClear, SIGNAL(clicked()), this, SLOT(DoClear()));
    QObject::connect(pClose, SIGNAL(clicked()), this, SLOT(close()));

    pRadioLayout1 = new QVBoxLayout;
    pRadioLayout2 = new QVBoxLayout;
    pRadioLayoutMain = new QHBoxLayout;
    pInputLayout = new QHBoxLayout;
    pControlButton = new QHBoxLayout;
    MainLayout = new QVBoxLayout;
    pFromLayout = new QVBoxLayout;
    pToLayout = new QVBoxLayout;

    pRadioLayout1 -> addWidget(pMeter1);
    pRadioLayout1 -> addWidget(pKiloMeter1);
    pRadioLayout1 -> addWidget(pCentiMeter1);
    pRadioLayout1 -> addWidget(pMilliMeter1);
    pRadioLayout1 -> addWidget(pMicroMeter1);
    pRadioLayout1 -> addWidget(pNanoMeter1);
    pRadioLayout1 -> addWidget(pMile1);
    pRadioLayout1 -> addWidget(pYard1);
    pRadioLayout1 -> addWidget(pFoot1);
    pRadioLayout1 -> addWidget(pInch1);
    pRadioLayout1 -> addWidget(pLightYear1);

    pRadioLayout2 -> addWidget(pMeter2);
    pRadioLayout2 -> addWidget(pKiloMeter2);
    pRadioLayout2 -> addWidget(pCentiMeter2);
    pRadioLayout2 -> addWidget(pMilliMeter2);
    pRadioLayout2 -> addWidget(pMicroMeter2);
    pRadioLayout2 -> addWidget(pNanoMeter2);
    pRadioLayout2 -> addWidget(pMile2);
    pRadioLayout2 -> addWidget(pYard2);
    pRadioLayout2 -> addWidget(pFoot2);
    pRadioLayout2 -> addWidget(pInch2);
    pRadioLayout2 -> addWidget(pLightYear2);

    pRadioLayoutMain -> addLayout(pRadioLayout1);
    pRadioLayoutMain -> addSpacing(100);
    pRadioLayoutMain -> addLayout(pRadioLayout2);

    pFromLayout -> addWidget(pLabelFrom);
    pFromLayout -> addWidget(pInputBox1);
    pToLayout -> addWidget(pLabelTo);
    pToLayout -> addWidget(pOutputBox1);

    pInputLayout -> addLayout(pFromLayout);
    pInputLayout -> addWidget(pEqualButton);
    pInputLayout -> addLayout(pToLayout);

    pControlButton -> addWidget(pClear);
    pControlButton -> addWidget(pClose);

    MainLayout -> addWidget(pLabelTitle);
    MainLayout -> addLayout(pInputLayout);
    MainLayout -> addLayout(pRadioLayoutMain);
    MainLayout -> addLayout(pControlButton);
    MainLayout -> addWidget(pLabelInfo);

    setLayout(MainLayout);
    setWindowTitle(tr("Lenght Converter"));
}

void LengthConverter::TextChangedInputBox1(const QString& str)
{
    from_lenght = str.toDouble();
}

void LengthConverter::DoCompute()
{
    if(pMeter1->isChecked() == true)
        from_choice = METER;
    else if(pKiloMeter1->isChecked() == true)
        from_choice = KILOMETER;
    else if(pCentiMeter1->isChecked() == true)
        from_choice = CENTIMETER;
    else if(pMilliMeter1->isChecked() == true)
        from_choice = MILLIMETER;
    else if(pMicroMeter1->isChecked() == true)
        from_choice = MICROMETER;
    else if(pNanoMeter1->isChecked() == true)
        from_choice = NANOMETER;
    else if(pMile1->isChecked() == true)
        from_choice = MILE;
    else if(pYard1->isChecked() == true)
        from_choice = YARD;
    else if(pFoot1->isChecked() == true)
        from_choice = FOOT;
    else if(pInch1->isChecked() == true)
        from_choice = INCH;
    else if(pLightYear1->isChecked() == true)
        from_choice = LIGHTYEAR;

    if(pMeter2->isChecked() == true)
        to_choice = METER;
    else if(pKiloMeter2->isChecked() == true)
        to_choice = KILOMETER;
    else if(pCentiMeter2->isChecked() == true)
        to_choice = CENTIMETER;
    else if(pMilliMeter2->isChecked() == true)
        to_choice = MILLIMETER;
    else if(pMicroMeter2->isChecked() == true)
        to_choice = MICROMETER;
    else if(pNanoMeter2->isChecked() == true)
        to_choice = NANOMETER;
    else if(pMile2->isChecked() == true)
        to_choice = MILE;
    else if(pYard2->isChecked() == true)
        to_choice = YARD;
    else if(pFoot2->isChecked() == true)
        to_choice = FOOT;
    else if(pInch2->isChecked() == true)
        to_choice = INCH;
    else if(pLightYear2->isChecked() == true)
        to_choice = LIGHTYEAR;

    to_lenght = Convert(from_choice, to_choice, from_lenght);
    QString str;
    str = QString("%L1").arg(to_lenght);
    pOutputBox1 ->setText(str);
    pLabelInfo ->setText(tr("Converted."));
}

void LengthConverter::DoClear()
{
    pOutputBox1 ->clear();
    pInputBox1 ->clear();
}
