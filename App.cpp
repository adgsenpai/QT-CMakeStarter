#include "App.h"
#include <QLabel>

App::App(QWidget *parent) : QWidget(parent) {
    QLabel *label = new QLabel("Hello World", this);
    // Optional: Set other properties for the label or the window itself
    // e.g., label->setAlignment(Qt::AlignCenter);
    // this->setFixedSize(200, 100); // Set fixed window size
}
