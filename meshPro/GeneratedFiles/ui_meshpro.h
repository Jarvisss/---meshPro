/********************************************************************************
** Form generated from reading UI file 'meshpro.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHPRO_H
#define UI_MESHPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myopenglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_meshProClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *is_show_light;
    QCheckBox *is_show_edge;
    QCheckBox *is_show_face;
    QCheckBox *is_show_point;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *is_show_axes;
    QCheckBox *is_show_texture;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *WheelSpeed;
    QSlider *WheelS;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *RotY;
    QSpinBox *LightX;
    QLabel *label;
    QSpinBox *LightY;
    QLabel *label_2;
    QSpinBox *LightZ;
    myOpenGLWidget *myWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *meshProClass)
    {
        if (meshProClass->objectName().isEmpty())
            meshProClass->setObjectName(QStringLiteral("meshProClass"));
        meshProClass->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(meshProClass->sizePolicy().hasHeightForWidth());
        meshProClass->setSizePolicy(sizePolicy);
        meshProClass->setMinimumSize(QSize(1024, 600));
        meshProClass->setMaximumSize(QSize(1366, 825));
        centralWidget = new QWidget(meshProClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMinimumSize(QSize(0, 0));
        centralWidget->setMaximumSize(QSize(1024, 111111));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        is_show_light = new QCheckBox(centralWidget);
        is_show_light->setObjectName(QStringLiteral("is_show_light"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(is_show_light->sizePolicy().hasHeightForWidth());
        is_show_light->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(is_show_light, 0, 2, 1, 1);

        is_show_edge = new QCheckBox(centralWidget);
        is_show_edge->setObjectName(QStringLiteral("is_show_edge"));

        gridLayout_2->addWidget(is_show_edge, 0, 0, 1, 1);

        is_show_face = new QCheckBox(centralWidget);
        is_show_face->setObjectName(QStringLiteral("is_show_face"));

        gridLayout_2->addWidget(is_show_face, 1, 0, 1, 1);

        is_show_point = new QCheckBox(centralWidget);
        is_show_point->setObjectName(QStringLiteral("is_show_point"));

        gridLayout_2->addWidget(is_show_point, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        is_show_axes = new QCheckBox(centralWidget);
        is_show_axes->setObjectName(QStringLiteral("is_show_axes"));

        gridLayout_2->addWidget(is_show_axes, 2, 2, 1, 1);

        is_show_texture = new QCheckBox(centralWidget);
        is_show_texture->setObjectName(QStringLiteral("is_show_texture"));

        gridLayout_2->addWidget(is_show_texture, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        WheelSpeed = new QLabel(centralWidget);
        WheelSpeed->setObjectName(QStringLiteral("WheelSpeed"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(WheelSpeed->sizePolicy().hasHeightForWidth());
        WheelSpeed->setSizePolicy(sizePolicy3);
        WheelSpeed->setMinimumSize(QSize(0, 0));
        WheelSpeed->setMaximumSize(QSize(150, 1000));
        WheelSpeed->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(WheelSpeed);

        WheelS = new QSlider(centralWidget);
        WheelS->setObjectName(QStringLiteral("WheelS"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(WheelS->sizePolicy().hasHeightForWidth());
        WheelS->setSizePolicy(sizePolicy4);
        WheelS->setMinimum(1);
        WheelS->setMaximum(100);
        WheelS->setSingleStep(5);
        WheelS->setPageStep(5);
        WheelS->setOrientation(Qt::Horizontal);
        WheelS->setTickPosition(QSlider::TicksBothSides);
        WheelS->setTickInterval(5);

        horizontalLayout_3->addWidget(WheelS);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        RotY = new QLabel(centralWidget);
        RotY->setObjectName(QStringLiteral("RotY"));
        sizePolicy3.setHeightForWidth(RotY->sizePolicy().hasHeightForWidth());
        RotY->setSizePolicy(sizePolicy3);
        RotY->setMinimumSize(QSize(0, 0));
        RotY->setMaximumSize(QSize(100, 1000));
        RotY->setTextFormat(Qt::AutoText);
        RotY->setScaledContents(false);
        RotY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(RotY);

        LightX = new QSpinBox(centralWidget);
        LightX->setObjectName(QStringLiteral("LightX"));
        sizePolicy4.setHeightForWidth(LightX->sizePolicy().hasHeightForWidth());
        LightX->setSizePolicy(sizePolicy4);
        LightX->setMinimum(-9999);
        LightX->setMaximum(9999);
        LightX->setSingleStep(10);
        LightX->setValue(1);

        horizontalLayout_4->addWidget(LightX);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        LightY = new QSpinBox(centralWidget);
        LightY->setObjectName(QStringLiteral("LightY"));
        sizePolicy4.setHeightForWidth(LightY->sizePolicy().hasHeightForWidth());
        LightY->setSizePolicy(sizePolicy4);
        LightY->setMinimum(-9999);
        LightY->setMaximum(9999);
        LightY->setSingleStep(10);
        LightY->setValue(1);

        horizontalLayout_4->addWidget(LightY);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_2);

        LightZ = new QSpinBox(centralWidget);
        LightZ->setObjectName(QStringLiteral("LightZ"));
        sizePolicy4.setHeightForWidth(LightZ->sizePolicy().hasHeightForWidth());
        LightZ->setSizePolicy(sizePolicy4);
        LightZ->setMinimum(-9999);
        LightZ->setMaximum(9999);
        LightZ->setSingleStep(10);
        LightZ->setValue(1);

        horizontalLayout_4->addWidget(LightZ);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        myWidget = new myOpenGLWidget(centralWidget);
        myWidget->setObjectName(QStringLiteral("myWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(77);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(myWidget->sizePolicy().hasHeightForWidth());
        myWidget->setSizePolicy(sizePolicy5);
        myWidget->setMinimumSize(QSize(0, 0));
        myWidget->setMaximumSize(QSize(1368, 1312313));

        verticalLayout_3->addWidget(myWidget);

        meshProClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(meshProClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 23));
        meshProClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(meshProClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        meshProClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(meshProClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        meshProClass->setStatusBar(statusBar);

        retranslateUi(meshProClass);
        QObject::connect(WheelS, SIGNAL(valueChanged(int)), myWidget, SLOT(setWheelSpeed(int)));
        QObject::connect(is_show_edge, SIGNAL(stateChanged(int)), myWidget, SLOT(check_edge_state(int)));
        QObject::connect(is_show_face, SIGNAL(stateChanged(int)), myWidget, SLOT(check_face_state(int)));
        QObject::connect(is_show_point, SIGNAL(stateChanged(int)), myWidget, SLOT(check_point_state(int)));
        QObject::connect(is_show_light, SIGNAL(stateChanged(int)), myWidget, SLOT(check_light_state(int)));
        QObject::connect(is_show_texture, SIGNAL(stateChanged(int)), myWidget, SLOT(check_texture_state(int)));
        QObject::connect(is_show_axes, SIGNAL(stateChanged(int)), myWidget, SLOT(check_axes_state(int)));
        QObject::connect(LightX, SIGNAL(valueChanged(int)), myWidget, SLOT(setLightPositionX(int)));
        QObject::connect(LightY, SIGNAL(valueChanged(int)), myWidget, SLOT(setLightPositionY(int)));
        QObject::connect(LightZ, SIGNAL(valueChanged(int)), myWidget, SLOT(setLightPositionZ(int)));

        QMetaObject::connectSlotsByName(meshProClass);
    } // setupUi

    void retranslateUi(QMainWindow *meshProClass)
    {
        meshProClass->setWindowTitle(QApplication::translate("meshProClass", "meshPro", 0));
        is_show_light->setText(QApplication::translate("meshProClass", "Light", 0));
        is_show_edge->setText(QApplication::translate("meshProClass", "Edge", 0));
        is_show_face->setText(QApplication::translate("meshProClass", "Face", 0));
        is_show_point->setText(QApplication::translate("meshProClass", "Point", 0));
        is_show_axes->setText(QApplication::translate("meshProClass", "Axes", 0));
        is_show_texture->setText(QApplication::translate("meshProClass", "Texture", 0));
        WheelSpeed->setText(QApplication::translate("meshProClass", "WheelSpeed: 1", 0));
        label_3->setText(QApplication::translate("meshProClass", "100", 0));
        RotY->setText(QApplication::translate("meshProClass", "LightX", 0));
        label->setText(QApplication::translate("meshProClass", "LightY", 0));
        label_2->setText(QApplication::translate("meshProClass", "LightZ", 0));
    } // retranslateUi

};

namespace Ui {
    class meshProClass: public Ui_meshProClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHPRO_H
