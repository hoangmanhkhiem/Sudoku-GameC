/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInfo;
    QAction *actionStart;
    QAction *actionUndo;
    QAction *actionReset;
    QAction *actionPause;
    QAction *actionRedo;
    QAction *actionRandom;
    QAction *actionRandom_2;
    QAction *actionRandom_3;
    QAction *actionRandom_4;
    QAction *actionInput_Sudoku_Game;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLCDNumber *timer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuNew_Game;
    QMenu *menuEasy_2;
    QMenu *menuNormal_2;
    QMenu *menuHard_2;
    QMenu *menuCrazy;
    QMenu *menuCustom;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(920, 680);
        MainWindow->setMinimumSize(QSize(920, 680));
        MainWindow->setMaximumSize(QSize(920, 680));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fig/sudoku"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName("actionInfo");
        actionInfo->setIcon(icon);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName("actionStart");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/fig/play"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon1);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/fig/prev"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon2);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/fig/previous"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon3);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName("actionPause");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/fig/pause"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon4);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/fig/next"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionRandom = new QAction(MainWindow);
        actionRandom->setObjectName("actionRandom");
        actionRandom_2 = new QAction(MainWindow);
        actionRandom_2->setObjectName("actionRandom_2");
        actionRandom_3 = new QAction(MainWindow);
        actionRandom_3->setObjectName("actionRandom_3");
        actionRandom_4 = new QAction(MainWindow);
        actionRandom_4->setObjectName("actionRandom_4");
        actionInput_Sudoku_Game = new QAction(MainWindow);
        actionInput_Sudoku_Game->setObjectName("actionInput_Sudoku_Game");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(700, 340, 111, 141));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 50, 621, 531));
        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setGeometry(QRect(689, 167, 131, 20));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(689, 287, 131, 20));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(700, 40, 111, 95));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 70, 20, 501));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setSpacing(24);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, -1, 16);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 14, -1, 12);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 17, -1, 8);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        verticalLayout_4->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        verticalLayout_4->addWidget(label_9);


        verticalLayout_5->addLayout(verticalLayout_4);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(90, 20, 571, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(39);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(6, 0, 20, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName("label_10");

        horizontalLayout->addWidget(label_10);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");

        horizontalLayout->addWidget(label_11);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName("label_12");

        horizontalLayout->addWidget(label_12);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(6, 0, 20, -1);
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName("label_13");

        horizontalLayout_2->addWidget(label_13);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName("label_14");

        horizontalLayout_2->addWidget(label_14);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName("label_15");

        horizontalLayout_2->addWidget(label_15);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(19, -1, 20, -1);
        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName("label_16");

        horizontalLayout_3->addWidget(label_16);

        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName("label_17");

        horizontalLayout_3->addWidget(label_17);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName("label_18");

        horizontalLayout_3->addWidget(label_18);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        label_19 = new QLabel(centralWidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(689, 192, 67, 17));
        timer = new QLCDNumber(centralWidget);
        timer->setObjectName("timer");
        timer->setGeometry(QRect(709, 220, 101, 51));
        timer->setMinimumSize(QSize(0, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(700, 60, 109, 24));
        pushButton_2->setFocusPolicy(Qt::ClickFocus);
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(85, 170, 255, 150);"));
        pushButton_2->setFlat(false);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 92, 109, 24));
        pushButton->setFocusPolicy(Qt::ClickFocus);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgba(85, 170, 255, 150);"));
        pushButton->setFlat(false);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(700, 124, 109, 24));
        pushButton_3->setFocusPolicy(Qt::ClickFocus);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgba(85, 170, 255, 150);"));
        pushButton_3->setFlat(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 920, 22));
        menuNew_Game = new QMenu(menuBar);
        menuNew_Game->setObjectName("menuNew_Game");
        menuEasy_2 = new QMenu(menuNew_Game);
        menuEasy_2->setObjectName("menuEasy_2");
        menuNormal_2 = new QMenu(menuNew_Game);
        menuNormal_2->setObjectName("menuNormal_2");
        menuHard_2 = new QMenu(menuNew_Game);
        menuHard_2->setObjectName("menuHard_2");
        menuCrazy = new QMenu(menuNew_Game);
        menuCrazy->setObjectName("menuCrazy");
        menuCustom = new QMenu(menuNew_Game);
        menuCustom->setObjectName("menuCustom");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::ToolBarArea::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNew_Game->menuAction());
        menuNew_Game->addAction(menuEasy_2->menuAction());
        menuNew_Game->addAction(menuNormal_2->menuAction());
        menuNew_Game->addAction(menuHard_2->menuAction());
        menuNew_Game->addAction(menuCrazy->menuAction());
        menuNew_Game->addAction(menuCustom->menuAction());
        menuEasy_2->addAction(actionRandom);
        menuNormal_2->addAction(actionRandom_2);
        menuHard_2->addAction(actionRandom_3);
        menuCrazy->addAction(actionRandom_4);
        menuCustom->addAction(actionInput_Sudoku_Game);
        mainToolBar->addAction(actionInfo);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addAction(actionReset);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sudoku Game - Powered by KhiemVipPro", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "info", nullptr));
#if QT_CONFIG(tooltip)
        actionInfo->setToolTip(QCoreApplication::translate("MainWindow", "Infomation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionInfo->setShortcut(QCoreApplication::translate("MainWindow", "Alt+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("MainWindow", "Reset to initial", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPause->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPause->setToolTip(QCoreApplication::translate("MainWindow", "Pause", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPause->setShortcut(QCoreApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRandom->setText(QCoreApplication::translate("MainWindow", "newGame", nullptr));
        actionRandom_2->setText(QCoreApplication::translate("MainWindow", "newGame", nullptr));
        actionRandom_3->setText(QCoreApplication::translate("MainWindow", "newGame", nullptr));
        actionRandom_4->setText(QCoreApplication::translate("MainWindow", "newGame", nullptr));
        actionInput_Sudoku_Game->setText(QCoreApplication::translate("MainWindow", "Input Sudoku Game", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Timer</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Tips", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
        menuNew_Game->setTitle(QCoreApplication::translate("MainWindow", "&New Game", nullptr));
        menuEasy_2->setTitle(QCoreApplication::translate("MainWindow", "Easy", nullptr));
        menuNormal_2->setTitle(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        menuHard_2->setTitle(QCoreApplication::translate("MainWindow", "Hard", nullptr));
        menuCrazy->setTitle(QCoreApplication::translate("MainWindow", "Crazy", nullptr));
        menuCustom->setTitle(QCoreApplication::translate("MainWindow", "Custom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
