#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H
#include <QDialog>
#include "ui_gotocelldialog.h"

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog
{
	Q_OBJECT
public:
		GoToCellDialog(QWidget *parent = 0);
private:
		void on_lineEdit_textChanged();
};
#endif
