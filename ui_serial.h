/********************************************************************************
** Form generated from reading UI file 'serial.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_H
#define UI_SERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serial
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QFrame *line;
    QFrame *line_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidgetAmounts;
    QToolButton *toolButtonAddRowServo;
    QToolButton *toolButtonRemoveRowServo;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetPattern;
    QToolButton *toolButtonAddRowPattern;
    QToolButton *toolButtonRemoveRowPattern;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditSerialPort;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_Times;
    QSpinBox *spinBoxTimesExecute;
    QPushButton *pushButtonExecute;
    QPushButton *pushButtonWeaveSelectedRows;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *labelName;
    QPushButton *pushButtonLoad;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *Serial)
    {
        if (Serial->objectName().isEmpty())
            Serial->setObjectName(QStringLiteral("Serial"));
        Serial->resize(953, 718);
        gridLayout_3 = new QGridLayout(Serial);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(Serial);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 11, 1, 1, 2);

        line = new QFrame(Serial);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 6, 1, 2, 2);

        line_3 = new QFrame(Serial);
        line_3->setObjectName(QStringLiteral("line_3"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 10, 1, 1, 2);

        groupBox_2 = new QGroupBox(Serial);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidgetAmounts = new QTableWidget(groupBox_2);
        if (tableWidgetAmounts->columnCount() < 14)
            tableWidgetAmounts->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetAmounts->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        if (tableWidgetAmounts->rowCount() < 2)
            tableWidgetAmounts->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetAmounts->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetAmounts->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 6, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 7, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 8, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 9, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 10, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 11, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 12, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(0, 13, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 6, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 7, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 8, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 9, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 10, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 11, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 12, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidgetAmounts->setItem(1, 13, __qtablewidgetitem43);
        tableWidgetAmounts->setObjectName(QStringLiteral("tableWidgetAmounts"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidgetAmounts->sizePolicy().hasHeightForWidth());
        tableWidgetAmounts->setSizePolicy(sizePolicy1);
        tableWidgetAmounts->horizontalHeader()->setDefaultSectionSize(30);

        gridLayout_2->addWidget(tableWidgetAmounts, 0, 0, 1, 3);

        toolButtonAddRowServo = new QToolButton(groupBox_2);
        toolButtonAddRowServo->setObjectName(QStringLiteral("toolButtonAddRowServo"));
        toolButtonAddRowServo->setEnabled(false);

        gridLayout_2->addWidget(toolButtonAddRowServo, 1, 0, 1, 1);

        toolButtonRemoveRowServo = new QToolButton(groupBox_2);
        toolButtonRemoveRowServo->setObjectName(QStringLiteral("toolButtonRemoveRowServo"));
        toolButtonRemoveRowServo->setEnabled(false);

        gridLayout_2->addWidget(toolButtonRemoveRowServo, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 4, 1, 1, 2);

        groupBox = new QGroupBox(Serial);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetPattern = new QTableWidget(groupBox);
        if (tableWidgetPattern->columnCount() < 14)
            tableWidgetPattern->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(4, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(5, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(6, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(7, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(8, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(9, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(10, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(11, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(12, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidgetPattern->setHorizontalHeaderItem(13, __qtablewidgetitem57);
        if (tableWidgetPattern->rowCount() < 3)
            tableWidgetPattern->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidgetPattern->setVerticalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidgetPattern->setVerticalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidgetPattern->setVerticalHeaderItem(2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 1, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 2, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 3, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 4, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 5, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 6, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 7, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 8, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 9, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 10, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 11, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 12, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidgetPattern->setItem(0, 13, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 1, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 2, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 3, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 4, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 5, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 6, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 7, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 8, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 9, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 10, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 11, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 12, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidgetPattern->setItem(1, 13, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 0, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 1, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 2, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 3, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 4, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 5, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 6, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 7, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 8, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 9, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 10, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 11, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 12, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableWidgetPattern->setItem(2, 13, __qtablewidgetitem102);
        tableWidgetPattern->setObjectName(QStringLiteral("tableWidgetPattern"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidgetPattern->sizePolicy().hasHeightForWidth());
        tableWidgetPattern->setSizePolicy(sizePolicy2);
        tableWidgetPattern->horizontalHeader()->setDefaultSectionSize(30);

        gridLayout->addWidget(tableWidgetPattern, 1, 0, 1, 4);

        toolButtonAddRowPattern = new QToolButton(groupBox);
        toolButtonAddRowPattern->setObjectName(QStringLiteral("toolButtonAddRowPattern"));
        toolButtonAddRowPattern->setEnabled(true);

        gridLayout->addWidget(toolButtonAddRowPattern, 2, 0, 1, 1);

        toolButtonRemoveRowPattern = new QToolButton(groupBox);
        toolButtonRemoveRowPattern->setObjectName(QStringLiteral("toolButtonRemoveRowPattern"));
        toolButtonRemoveRowPattern->setEnabled(true);

        gridLayout->addWidget(toolButtonRemoveRowPattern, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 5, 1, 1, 2);

        groupBox_3 = new QGroupBox(Serial);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        lineEditSerialPort = new QLineEdit(groupBox_3);
        lineEditSerialPort->setObjectName(QStringLiteral("lineEditSerialPort"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEditSerialPort->sizePolicy().hasHeightForWidth());
        lineEditSerialPort->setSizePolicy(sizePolicy5);

        gridLayout_4->addWidget(lineEditSerialPort, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 2, 1, 1, 2);

        groupBox_5 = new QGroupBox(Serial);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_Times = new QLabel(groupBox_5);
        label_Times->setObjectName(QStringLiteral("label_Times"));
        sizePolicy4.setHeightForWidth(label_Times->sizePolicy().hasHeightForWidth());
        label_Times->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(label_Times, 0, 1, 1, 1);

        spinBoxTimesExecute = new QSpinBox(groupBox_5);
        spinBoxTimesExecute->setObjectName(QStringLiteral("spinBoxTimesExecute"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(spinBoxTimesExecute->sizePolicy().hasHeightForWidth());
        spinBoxTimesExecute->setSizePolicy(sizePolicy6);
        spinBoxTimesExecute->setMinimum(1);
        spinBoxTimesExecute->setMaximum(99999);

        gridLayout_6->addWidget(spinBoxTimesExecute, 0, 0, 1, 1);

        pushButtonExecute = new QPushButton(groupBox_5);
        pushButtonExecute->setObjectName(QStringLiteral("pushButtonExecute"));
        sizePolicy5.setHeightForWidth(pushButtonExecute->sizePolicy().hasHeightForWidth());
        pushButtonExecute->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(pushButtonExecute, 0, 3, 1, 1);

        pushButtonWeaveSelectedRows = new QPushButton(groupBox_5);
        pushButtonWeaveSelectedRows->setObjectName(QStringLiteral("pushButtonWeaveSelectedRows"));

        gridLayout_6->addWidget(pushButtonWeaveSelectedRows, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 8, 1, 1, 2);

        groupBox_4 = new QGroupBox(Serial);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy3.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy3);
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelName = new QLabel(groupBox_4);
        labelName->setObjectName(QStringLiteral("labelName"));
        sizePolicy3.setHeightForWidth(labelName->sizePolicy().hasHeightForWidth());
        labelName->setSizePolicy(sizePolicy3);
        labelName->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(labelName, 0, 1, 1, 1);

        pushButtonLoad = new QPushButton(groupBox_4);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));
        pushButtonLoad->setEnabled(true);
        sizePolicy6.setHeightForWidth(pushButtonLoad->sizePolicy().hasHeightForWidth());
        pushButtonLoad->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(pushButtonLoad, 0, 0, 1, 1);

        pushButtonSave = new QPushButton(groupBox_4);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setEnabled(true);
        sizePolicy6.setHeightForWidth(pushButtonSave->sizePolicy().hasHeightForWidth());
        pushButtonSave->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(pushButtonSave, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 1, 1, 2);


        retranslateUi(Serial);

        QMetaObject::connectSlotsByName(Serial);
    } // setupUi

    void retranslateUi(QWidget *Serial)
    {
        Serial->setWindowTitle(QApplication::translate("Serial", "Form", 0));
        label->setText(QApplication::translate("Serial", "geneave - arduino weaver control - development version Ignacio Gutierrez <ignacioandcorral@yahoo.com>, Wolfram Teetz <wolframteetz@gmail.com> ", 0));
        groupBox_2->setTitle(QApplication::translate("Serial", "Servo setup", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetAmounts->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetAmounts->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Serial", "2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetAmounts->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Serial", "3", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetAmounts->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Serial", "4", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetAmounts->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Serial", "5", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetAmounts->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Serial", "6", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetAmounts->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Serial", "7", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetAmounts->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Serial", "8", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetAmounts->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Serial", "9", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetAmounts->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Serial", "10", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetAmounts->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Serial", "11", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetAmounts->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Serial", "12", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetAmounts->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Serial", "13", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetAmounts->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("Serial", "14", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetAmounts->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetAmounts->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("Serial", "1", 0));

        const bool __sortingEnabled = tableWidgetAmounts->isSortingEnabled();
        tableWidgetAmounts->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetAmounts->item(0, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetAmounts->item(0, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetAmounts->item(0, 2);
        ___qtablewidgetitem18->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetAmounts->item(0, 3);
        ___qtablewidgetitem19->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetAmounts->item(0, 4);
        ___qtablewidgetitem20->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetAmounts->item(0, 5);
        ___qtablewidgetitem21->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetAmounts->item(0, 6);
        ___qtablewidgetitem22->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidgetAmounts->item(0, 7);
        ___qtablewidgetitem23->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidgetAmounts->item(0, 8);
        ___qtablewidgetitem24->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidgetAmounts->item(0, 9);
        ___qtablewidgetitem25->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidgetAmounts->item(0, 10);
        ___qtablewidgetitem26->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidgetAmounts->item(0, 11);
        ___qtablewidgetitem27->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidgetAmounts->item(0, 12);
        ___qtablewidgetitem28->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidgetAmounts->item(0, 13);
        ___qtablewidgetitem29->setText(QApplication::translate("Serial", "00", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidgetAmounts->item(1, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidgetAmounts->item(1, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidgetAmounts->item(1, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidgetAmounts->item(1, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidgetAmounts->item(1, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidgetAmounts->item(1, 5);
        ___qtablewidgetitem35->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidgetAmounts->item(1, 6);
        ___qtablewidgetitem36->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidgetAmounts->item(1, 7);
        ___qtablewidgetitem37->setText(QApplication::translate("Serial", "16", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidgetAmounts->item(1, 8);
        ___qtablewidgetitem38->setText(QApplication::translate("Serial", "23", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidgetAmounts->item(1, 9);
        ___qtablewidgetitem39->setText(QApplication::translate("Serial", "16", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidgetAmounts->item(1, 10);
        ___qtablewidgetitem40->setText(QApplication::translate("Serial", "16", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidgetAmounts->item(1, 11);
        ___qtablewidgetitem41->setText(QApplication::translate("Serial", "16", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidgetAmounts->item(1, 12);
        ___qtablewidgetitem42->setText(QApplication::translate("Serial", "18", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidgetAmounts->item(1, 13);
        ___qtablewidgetitem43->setText(QApplication::translate("Serial", "18", 0));
        tableWidgetAmounts->setSortingEnabled(__sortingEnabled);

        toolButtonAddRowServo->setText(QApplication::translate("Serial", "add row", 0));
        toolButtonRemoveRowServo->setText(QApplication::translate("Serial", "remove row", 0));
        groupBox->setTitle(QApplication::translate("Serial", "Pattern", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidgetPattern->horizontalHeaderItem(0);
        ___qtablewidgetitem44->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidgetPattern->horizontalHeaderItem(1);
        ___qtablewidgetitem45->setText(QApplication::translate("Serial", "2", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidgetPattern->horizontalHeaderItem(2);
        ___qtablewidgetitem46->setText(QApplication::translate("Serial", "3", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidgetPattern->horizontalHeaderItem(3);
        ___qtablewidgetitem47->setText(QApplication::translate("Serial", "4", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidgetPattern->horizontalHeaderItem(4);
        ___qtablewidgetitem48->setText(QApplication::translate("Serial", "5", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidgetPattern->horizontalHeaderItem(5);
        ___qtablewidgetitem49->setText(QApplication::translate("Serial", "6", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidgetPattern->horizontalHeaderItem(6);
        ___qtablewidgetitem50->setText(QApplication::translate("Serial", "7", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidgetPattern->horizontalHeaderItem(7);
        ___qtablewidgetitem51->setText(QApplication::translate("Serial", "8", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidgetPattern->horizontalHeaderItem(8);
        ___qtablewidgetitem52->setText(QApplication::translate("Serial", "9", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidgetPattern->horizontalHeaderItem(9);
        ___qtablewidgetitem53->setText(QApplication::translate("Serial", "10", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidgetPattern->horizontalHeaderItem(10);
        ___qtablewidgetitem54->setText(QApplication::translate("Serial", "11", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidgetPattern->horizontalHeaderItem(11);
        ___qtablewidgetitem55->setText(QApplication::translate("Serial", "12", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidgetPattern->horizontalHeaderItem(12);
        ___qtablewidgetitem56->setText(QApplication::translate("Serial", "13", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidgetPattern->horizontalHeaderItem(13);
        ___qtablewidgetitem57->setText(QApplication::translate("Serial", "14", 0));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidgetPattern->verticalHeaderItem(0);
        ___qtablewidgetitem58->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidgetPattern->verticalHeaderItem(1);
        ___qtablewidgetitem59->setText(QApplication::translate("Serial", "2", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidgetPattern->verticalHeaderItem(2);
        ___qtablewidgetitem60->setText(QApplication::translate("Serial", "3", 0));

        const bool __sortingEnabled1 = tableWidgetPattern->isSortingEnabled();
        tableWidgetPattern->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem61 = tableWidgetPattern->item(0, 0);
        ___qtablewidgetitem61->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidgetPattern->item(0, 1);
        ___qtablewidgetitem62->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidgetPattern->item(0, 2);
        ___qtablewidgetitem63->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidgetPattern->item(0, 3);
        ___qtablewidgetitem64->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidgetPattern->item(0, 4);
        ___qtablewidgetitem65->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidgetPattern->item(0, 5);
        ___qtablewidgetitem66->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidgetPattern->item(0, 6);
        ___qtablewidgetitem67->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidgetPattern->item(0, 7);
        ___qtablewidgetitem68->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidgetPattern->item(0, 8);
        ___qtablewidgetitem69->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidgetPattern->item(0, 9);
        ___qtablewidgetitem70->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidgetPattern->item(0, 10);
        ___qtablewidgetitem71->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidgetPattern->item(0, 11);
        ___qtablewidgetitem72->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidgetPattern->item(0, 12);
        ___qtablewidgetitem73->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidgetPattern->item(0, 13);
        ___qtablewidgetitem74->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidgetPattern->item(1, 0);
        ___qtablewidgetitem75->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidgetPattern->item(1, 1);
        ___qtablewidgetitem76->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidgetPattern->item(1, 2);
        ___qtablewidgetitem77->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidgetPattern->item(1, 3);
        ___qtablewidgetitem78->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidgetPattern->item(1, 4);
        ___qtablewidgetitem79->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidgetPattern->item(1, 5);
        ___qtablewidgetitem80->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidgetPattern->item(1, 6);
        ___qtablewidgetitem81->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidgetPattern->item(1, 7);
        ___qtablewidgetitem82->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidgetPattern->item(1, 8);
        ___qtablewidgetitem83->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidgetPattern->item(1, 9);
        ___qtablewidgetitem84->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidgetPattern->item(1, 10);
        ___qtablewidgetitem85->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidgetPattern->item(1, 11);
        ___qtablewidgetitem86->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidgetPattern->item(1, 12);
        ___qtablewidgetitem87->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidgetPattern->item(1, 13);
        ___qtablewidgetitem88->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidgetPattern->item(2, 0);
        ___qtablewidgetitem89->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidgetPattern->item(2, 1);
        ___qtablewidgetitem90->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidgetPattern->item(2, 2);
        ___qtablewidgetitem91->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidgetPattern->item(2, 3);
        ___qtablewidgetitem92->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidgetPattern->item(2, 4);
        ___qtablewidgetitem93->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidgetPattern->item(2, 5);
        ___qtablewidgetitem94->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem95 = tableWidgetPattern->item(2, 6);
        ___qtablewidgetitem95->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem96 = tableWidgetPattern->item(2, 7);
        ___qtablewidgetitem96->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem97 = tableWidgetPattern->item(2, 8);
        ___qtablewidgetitem97->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem98 = tableWidgetPattern->item(2, 9);
        ___qtablewidgetitem98->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem99 = tableWidgetPattern->item(2, 10);
        ___qtablewidgetitem99->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem100 = tableWidgetPattern->item(2, 11);
        ___qtablewidgetitem100->setText(QApplication::translate("Serial", "0", 0));
        QTableWidgetItem *___qtablewidgetitem101 = tableWidgetPattern->item(2, 12);
        ___qtablewidgetitem101->setText(QApplication::translate("Serial", "1", 0));
        QTableWidgetItem *___qtablewidgetitem102 = tableWidgetPattern->item(2, 13);
        ___qtablewidgetitem102->setText(QApplication::translate("Serial", "0", 0));
        tableWidgetPattern->setSortingEnabled(__sortingEnabled1);

        toolButtonAddRowPattern->setText(QApplication::translate("Serial", "add row", 0));
        toolButtonRemoveRowPattern->setText(QApplication::translate("Serial", "remove row(s)", 0));
        groupBox_3->setTitle(QApplication::translate("Serial", "Serial Port", 0));
        label_3->setText(QApplication::translate("Serial", "Serial port", 0));
        lineEditSerialPort->setText(QApplication::translate("Serial", "/dev/tty.usbmodemFA141", 0));
        groupBox_5->setTitle(QApplication::translate("Serial", "Servo Control", 0));
        label_Times->setText(QApplication::translate("Serial", "Time(s)", 0));
        pushButtonExecute->setText(QApplication::translate("Serial", "Weave all rows", 0));
        pushButtonWeaveSelectedRows->setText(QApplication::translate("Serial", "Weave selected rows", 0));
        groupBox_4->setTitle(QApplication::translate("Serial", "Control", 0));
        labelName->setText(QApplication::translate("Serial", "CustomWeave", 0));
        pushButtonLoad->setText(QApplication::translate("Serial", "Load", 0));
        pushButtonSave->setText(QApplication::translate("Serial", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class Serial: public Ui_Serial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_H
