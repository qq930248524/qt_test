#ifndef _FIND_H
#define _FIND_H
#include <QtGui>
#include <QDialog>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

class Find : public QDialog
{
	Q_OBJECT
public:
	Find(QWidget* parent = 0);

signals:
	void findNext(const QString &str, Qt::CaseSensitivity cs);
	void findPrevious(const QString &str, Qt::CaseSensitivity cs);
private slots:
	void findClicked();
	void enableFindButton(const QString &);

private:
	QLabel *label;
	QLineEdit *lineEdit;
	QCheckBox *caseCheckBox;
	QCheckBox *backwardCheckBox;
	QPushButton *findButton;
	QPushButton *closeButton;
	QHBoxLayout *mainLayout;
	QHBoxLayout *topleftLayout;
	QVBoxLayout *leftLayout;
	QVBoxLayout *rightLayout;
public:
	void _getWidget();
	void _getLayout();
	void _getName();
};

#endif
