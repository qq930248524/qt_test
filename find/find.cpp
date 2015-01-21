#include "find.h"

Find::Find(QWidget * parent)
	:QDialog(parent)
{
	_getWidget();
	_getLayout();
	_getName();
}

void Find::_getWidget()
{
	label = new QLabel(tr("Find &What:"));
	lineEdit = new QLineEdit;
	label->setBuddy(lineEdit);

	caseCheckBox = new QCheckBox(tr("Mach &case"));
	backwardCheckBox = new QCheckBox(tr("Search &backward"));

	findButton = new QPushButton(tr("&Find"));
	findButton->setDefault(true);
	findButton->setEnabled(false);
	closeButton = new QPushButton(tr("&Close"));

        connect(lineEdit, SIGNAL(textChanged(const QString&)),this, SLOT(enableFindButton(const QString&)));
        connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));
        connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
}

void Find::_getLayout()
{

	topleftLayout = new QHBoxLayout();
	topleftLayout->addWidget(label);
	topleftLayout->addWidget(lineEdit);

	leftLayout = new QVBoxLayout();
	leftLayout->addLayout(topleftLayout);
	leftLayout->addWidget(caseCheckBox);
	leftLayout->addWidget(backwardCheckBox);

	rightLayout = new QVBoxLayout();
	rightLayout->addWidget(findButton);
	rightLayout->addWidget(closeButton);
	rightLayout->addStretch();

	mainLayout = new QHBoxLayout();
	mainLayout->addLayout(leftLayout);
	mainLayout->addLayout(rightLayout);
	setLayout(mainLayout);
	return ;
}

void Find::_getName()
{
	setWindowTitle(tr("find"));
}

void Find::enableFindButton(const QString &text)
{
	findButton->setEnabled(!text.isEmpty());
}

void Find::findClicked()
{
	QString text = lineEdit->text();
	Qt::CaseSensitivity cs = caseCheckBox->isChecked() ? Qt::CaseSensitive
							   : Qt::CaseInsensitive;
	if(backwardCheckBox->isChecked()){
		emit findPrevious(text, cs);
	}else{
		emit findNext(text, cs);
	}
}
