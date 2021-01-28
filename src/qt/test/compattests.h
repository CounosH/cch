// Copyright (c) 2009-2016 The CounosH Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COUNOSH_QT_TEST_COMPATTESTS_H
#define COUNOSH_QT_TEST_COMPATTESTS_H

#include <QObject>
#include <QTest>

class CompatTests : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void bswapTests();
};

#endif // COUNOSH_QT_TEST_COMPATTESTS_H
