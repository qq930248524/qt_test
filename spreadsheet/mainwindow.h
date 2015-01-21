#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

class QLable;
class QAction;
class FindDialog;
class Spreadsheet;

class MainWindow:public QMainWindow
{
	Q_OBJECT
public:
	MainWindow();
protected:
	void closeEvent(QCloseEvent *event);
private slots:
	void newFile();
	void open();
	void save();
	void saveAs();
	void find();
	void goToCell();
	void sort();
	void about();

	void openRecenFile();
	void opdateStatusBar();
	void spreadsheetModefied();

private:
	void createActions();
	void createMenus();
	void createContextMenu();
	void createStatusBar();
	void readSettings();
	void writeSettings();
	bool okToContinue();
	bool loadFile(const QString &fileName);
	bool saveFile(const QString &fileName);
	void setCurrentFile(const QString &fileName);
	void updateRecentFileActions();
	QString strippedName(const QString &fullFileName);

	Spreadsheet *spreadsheet;
	FindDialog *findDialog;
	Qlabel *locationLabel;
	Qlabel *formulaLabel;
	QStringList recentFiles;
	QString curFile;

	enum { MaxRecentFiles = 5};
	QAction *recentFileActions[MaxRecentFiles];
	QAction *sparatorAction;

	QMenu *fileMenu;
	QMenu *editMenu;

	QToolBar *fileToolBar;
	QToolBar *editToolBar;
	QAction *newAction;
	QAction *openAction;

	QAction *aboutQtAction;
};

#endif
