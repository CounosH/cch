// Copyright (c) 2011-2014 The CounosH Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COUNOSH_QT_COUNOSHADDRESSVALIDATOR_H
#define COUNOSH_QT_COUNOSHADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CounosHAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CounosHAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** CounosH address widget validator, checks for a valid counosh address.
 */
class CounosHAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CounosHAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // COUNOSH_QT_COUNOSHADDRESSVALIDATOR_H
