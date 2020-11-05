#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //std::vector< class point_t > vertices;
    //std::vector< std::vector< class type_t > > faces;
    //OFFIO::open("shere.off", vertices, faces);
}

MainWindow::~MainWindow()
{
    delete ui;
}

