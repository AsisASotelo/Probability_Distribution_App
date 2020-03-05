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
  QPushButton *button6 = new QPushButton("&Bernoulli");
  QPushButton *button7 = new QPushButton("&First Success");
  QPushButton *button8 = new QPushButton("&Geometric");
  QPushButton *button9 = new QPushButton("&Negative Binomial");
  QPushButton *button10 = new QPushButton("&Hyper Geometric");
  QPushButton *button11 = new QPushButton("&Poisson");
  QPushButton *button12 = new QPushButton("&Chi-Squared");
  QPushButton *button13 = new QPushButton("&Student-t");
  QPushButton *quitButton = new QPushButton("Quit");

  // Signal and Slot to quitButton

  QObject::connect(quitButton,SIGNAL(clicked()),&app, SLOT(quit()));

  // The following creates the GridLayout of the program

  QGridLayout *layout = new QGridLayout;
  layout -> addWidget(button1,0,0);
  layout -> addWidget(button2,1,0);
  layout -> addWidget(button3,2,0);
  layout -> addWidget(button4,3,0);
  layout -> addWidget(button5,4,0);
  layout -> addWidget(button6,5,0);
  layout -> addWidget(button7,6,0);
  layout -> addWidget(button8,7,0);
  layout -> addWidget(button9,8,0);
  layout -> addWidget(button10,9,0);
  layout -> addWidget(button11,10,0);
  layout -> addWidget(button12,11,0);
  layout -> addWidget(button13,12,0);



  window -> setLayout(layout);
  window -> setWindowTitle("Distribution App V1");
  window-> show();
  return app.exec();






}
