// Copyright (c) 2011-2014 The FacileCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FacileCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FacileCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** FacileCoin address widget validator, checks for a valid facilecoin address.
 */
class FacileCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FacileCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H