﻿#include <iostream>
#include "clsCrypto.h"
#include "clsCryptoEx.h"

int main()
{
    clsCryptoEx* p_lobjCryptoEx;

        // vytvořit objekt
        p_lobjCryptoEx = new clsCryptoEx();

        // otevřít soubor
        p_lobjCryptoEx->OpenFile(L"c:\\Users\\Siax\\Documents\\Temp\\text1.txt", L"c:\\Users\\Siax\\Documents\\Temp\\text.txt");

        // zašifrovat
        p_lobjCryptoEx->Crypt();

        // zavřít soubor
        p_lobjCryptoEx->CloseFile();

        // zrušit objekt
        delete(p_lobjCryptoEx);
}
