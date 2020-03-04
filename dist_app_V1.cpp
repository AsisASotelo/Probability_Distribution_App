#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QDateTimeEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QLabel>
#include <QStringList>

int main(int argc, char *argv[])

{

  QApplication app(argc,argv); // Creation of main application object
  QWidget *window = new QWidget; // Creation of the window QWidget
  QPushButton *button1 = new QPushButton("&Normal Distribution");
  QPushButton *button2 = new QPushButton("&Exponential Distribution");
  QPushButton *button3 = new QPushButton("&Uniform Distribution");
  QPushButton *button4 = new QPushButton("&Beta Distribution");
  QPushButton *button5 = new QPushButton("&GammaDistribution");

  // The following creates the GridLayout of the program

  QGridLayout *layout = new QGridLayout;
  layout -> addWidget(button1,0,0);
  layout -> addWidget(button2,1,0);
  layout -> addWidget(button3,2,0);
  layout -> addWidget(button4,3,0);
  layout -> addWidget(button5,4,0);


  window -> setLayout(layout);
  window -> setWindowTitle("Distribution App V1");
  window -> show();
  return app.exec();






}
