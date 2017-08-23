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
    myOpenGLWidget *myWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QCheckBox *is_show_light;
    QCheckBox *is_show_edge;
    QCheckBox *checkBox_4;
    QCheckBox *is_show_face;
    QCheckBox *is_show_point;
    QCheckBox *checkBox_6;
    QCheckBox *is_show_axes;
    QCheckBox *checkBox_9;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *is_show_texture;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *RotX;
    QSlider *RotXSlider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *RotY;
    QSlider *RotYSlider;
    QHBoxLayout *horizontalLayout_5;
    QLabel *RotZ;
    QSlider *RotZSlider;
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
        myWidget = new myOpenGLWidget(centralWidget);
        myWidget->setObjectName(QStringLiteral("myWidget"));
        sizePolicy1.setHeightForWidth(myWidget->sizePolicy().hasHeightForWidth());
        myWidget->setSizePolicy(sizePolicy1);
        myWidget->setMinimumSize(QSize(0, 0));
        myWidget->setMaximumSize(QSize(1368, 1312313));

        verticalLayout_3->addWidget(myWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
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

        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_2->addWidget(checkBox_4, 0, 4, 1, 1);

        is_show_face = new QCheckBox(centralWidget);
        is_show_face->setObjectName(QStringLiteral("is_show_face"));

        gridLayout_2->addWidget(is_show_face, 1, 0, 1, 1);

        is_show_point = new QCheckBox(centralWidget);
        is_show_point->setObjectName(QStringLiteral("is_show_point"));

        gridLayout_2->addWidget(is_show_point, 2, 0, 1, 1);

        checkBox_6 = new QCheckBox(centralWidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout_2->addWidget(checkBox_6, 1, 4, 1, 1);

        is_show_axes = new QCheckBox(centralWidget);
        is_show_axes->setObjectName(QStringLiteral("is_show_axes"));

        gridLayout_2->addWidget(is_show_axes, 2, 2, 1, 1);

        checkBox_9 = new QCheckBox(centralWidget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        gridLayout_2->addWidget(checkBox_9, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        is_show_texture = new QCheckBox(centralWidget);
        is_show_texture->setObjectName(QStringLiteral("is_show_texture"));

        gridLayout_2->addWidget(is_show_texture, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        RotX = new QLabel(centralWidget);
        RotX->setObjectName(QStringLiteral("RotX"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(RotX->sizePolicy().hasHeightForWidth());
        RotX->setSizePolicy(sizePolicy3);
        RotX->setMinimumSize(QSize(0, 0));
        RotX->setMaximumSize(QSize(150, 1000));
        RotX->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(RotX);

        RotXSlider = new QSlider(centralWidget);
        RotXSlider->setObjectName(QStringLiteral("RotXSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(RotXSlider->sizePolicy().hasHeightForWidth());
        RotXSlider->setSizePolicy(sizePolicy4);
        RotXSlider->setMaximum(360);
        RotXSlider->setSingleStep(16);
        RotXSlider->setPageStep(15);
        RotXSlider->setOrientation(Qt::Horizontal);
        RotXSlider->setTickPosition(QSlider::TicksAbove);
        RotXSlider->setTickInterval(15);

        horizontalLayout_3->addWidget(RotXSlider);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        RotY = new QLabel(centralWidget);
        RotY->setObjectName(QStringLiteral("RotY"));
        sizePolicy3.setHeightForWidth(RotY->sizePolicy().hasHeightForWidth());
        RotY->setSizePolicy(sizePolicy3);
        RotY->setMinimumSize(QSize(0, 0));
        RotY->setMaximumSize(QSize(150, 1000));
        RotY->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(RotY);

        RotYSlider = new QSlider(centralWidget);
        RotYSlider->setObjectName(QStringLiteral("RotYSlider"));
        sizePolicy4.setHeightForWidth(RotYSlider->sizePolicy().hasHeightForWidth());
        RotYSlider->setSizePolicy(sizePolicy4);
        RotYSlider->setMaximum(360);
        RotYSlider->setSingleStep(16);
        RotYSlider->setPageStep(15);
        RotYSlider->setOrientation(Qt::Horizontal);
        RotYSlider->setTickPosition(QSlider::TicksAbove);
        RotYSlider->setTickInterval(15);

        horizontalLayout_4->addWidget(RotYSlider);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        RotZ = new QLabel(centralWidget);
        RotZ->setObjectName(QStringLiteral("RotZ"));
        sizePolicy3.setHeightForWidth(RotZ->sizePolicy().hasHeightForWidth());
        RotZ->setSizePolicy(sizePolicy3);
        RotZ->setMinimumSize(QSize(0, 0));
        RotZ->setMaximumSize(QSize(150, 1000));
        RotZ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(RotZ);

        RotZSlider = new QSlider(centralWidget);
        RotZSlider->setObjectName(QStringLiteral("RotZSlider"));
        sizePolicy4.setHeightForWidth(RotZSlider->sizePolicy().hasHeightForWidth());
        RotZSlider->setSizePolicy(sizePolicy4);
        RotZSlider->setMaximum(360);
        RotZSlider->setSingleStep(16);
        RotZSlider->setPageStep(15);
        RotZSlider->setOrientation(Qt::Horizontal);
        RotZSlider->setTickPosition(QSlider::TicksAbove);
        RotZSlider->setTickInterval(15);

        horizontalLayout_5->addWidget(RotZSlider);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

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
        QObject::connect(RotZSlider, SIGNAL(valueChanged(int)), myWidget, SLOT(setZRotation(int)));
        QObject::connect(RotYSlider, SIGNAL(valueChanged(int)), myWidget, SLOT(setYRotation(int)));
        QObject::connect(RotXSlider, SIGNAL(valueChanged(int)), myWidget, SLOT(setXRotation(int)));
        QObject::connect(is_show_edge, SIGNAL(stateChanged(int)), myWidget, SLOT(check_edge_state(int)));
        QObject::connect(is_show_face, SIGNAL(stateChanged(int)), myWidget, SLOT(check_face_state(int)));
        QObject::connect(is_show_point, SIGNAL(stateChanged(int)), myWidget, SLOT(check_point_state(int)));
        QObject::connect(is_show_light, SIGNAL(stateChanged(int)), myWidget, SLOT(check_light_state(int)));
        QObject::connect(is_show_texture, SIGNAL(stateChanged(int)), myWidget, SLOT(check_texture_state(int)));
        QObject::connect(is_show_axes, SIGNAL(stateChanged(int)), myWidget, SLOT(check_axes_state(int)));

        QMetaObject::connectSlotsByName(meshProClass);
    } // setupUi

    void retranslateUi(QMainWindow *meshProClass)
    {
        meshProClass->setWindowTitle(QApplication::translate("meshProClass", "meshPro", 0));
        is_show_light->setText(QApplication::translate("meshProClass", "Light", 0));
        is_show_edge->setText(QApplication::translate("meshProClass", "Edge", 0));
        checkBox_4->setText(QApplication::translate("meshProClass", "...", 0));
        is_show_face->setText(QApplication::translate("meshProClass", "Face", 0));
        is_show_point->setText(QApplication::translate("meshProClass", "Point", 0));
        checkBox_6->setText(QApplication::translate("meshProClass", "...", 0));
        is_show_axes->setText(QApplication::translate("meshProClass", "Axes", 0));
        checkBox_9->setText(QApplication::translate("meshProClass", "...", 0));
        is_show_texture->setText(QApplication::translate("meshProClass", "Texture", 0));
        RotX->setText(QApplication::translate("meshProClass", "RotX", 0));
        RotY->setText(QApplication::translate("meshProClass", "RotY", 0));
        RotZ->setText(QApplication::translate("meshProClass", "RotZ", 0));
    } // retranslateUi

};

namespace Ui {
    class meshProClass: public Ui_meshProClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHPRO_H
