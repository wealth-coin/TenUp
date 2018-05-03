// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#define BITCOIN_QT_OPENURIDIALOG_H

#include <QDialog>
#include "httprequestworker.h"

namespace Ui
{
class SetupMasternode;
}

class SetupMasternode : public QDialog
{
    Q_OBJECT


protected slots:
    void accept();

private slots:
    void on_selectFileButton_clicked();
    void handle_result(HttpRequestWorker *worker);

private:
    Ui::SetupMasternode* ui;

public:
    explicit SetupMasternode(QWidget* parent);
    ~SetupMasternode();




};
