# -------------------------------------------------
# Project created by QtCreator 2011-02-16T12:30:14
# -------------------------------------------------
QT += core \
    gui
TARGET = iCanC
TEMPLATE = app
SOURCES += CyclomaticComplexity.cpp \
    NodeStat.cpp \
    main.cpp \
    userinterface.cpp \
    SourceFormat.cpp \
    NodeData.cpp \
    LogicAnalyzer.cpp \
    PieChartWidget.cpp \
    PieChart.cpp
HEADERS += CyclomaticComplexity.h \
    NodeStat.h \
    userinterface.h \
    SourceFormat.h \
    NodeData.h \
    LogicAnalyzer.h \
    PieChartWidget.h \
    PieChart.h
FORMS += userinterface.ui
RESOURCES += Resources/Resouces.qrc
CONFIG -= app_bundle
