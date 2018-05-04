// Copyright (c) 2011-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "setupmasternode.h"
#include "ui_setupmasternode.h"

#include "guiutil.h"
#include "walletmodel.h"

#include <QNetworkReply>
#include <QMessageBox>
#include <QUrl>
#include <QDesktopServices>

SetupMasternode::SetupMasternode(QWidget* parent) : QDialog(parent),
                                                ui(new Ui::SetupMasternode)
{
    ui->setupUi(this);
#if QT_VERSION >= 0x040700
    ui->uriEdit->setPlaceholderText("Enter payment ID like e9dd0a14-fd14-4ebb-bced-abe9d93fd993");
#endif
}

SetupMasternode::~SetupMasternode()
{
    delete ui;
}

void SetupMasternode::accept()
{
    if(!QDesktopServices::openUrl(QUrl("https://www.google.com", QUrl::TolerantMode)))
    {
        this->close();
    }
}

void SetupMasternode::on_selectFileButton_clicked()
{
    string paymentid = ui->uriEdit->text();
    if ((paymentid.empty()) || (paymentid == "Enter payment ID like e9dd0a14-fd14-4ebb-bced-abe9d93fd993"))
        return;

    //For testing
    paymentid = "670d8270-95df-4485-be4d-32f3c55a8329";

    QString url_str = QString::fromStdString("http://masternode.tenup.io/api/masternode/setup?id=") + QString::fromStdString(paymentid);

    HttpRequestInput input(url_str, "GET");

    HttpRequestWorker *worker = new HttpRequestWorker(this);
    connect(worker, SIGNAL(on_execution_finished(HttpRequestWorker*)), this, SLOT(handle_result(HttpRequestWorker*)));
    worker->execute(&input);
    this->close();
}
