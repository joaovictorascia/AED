#include <iostream>
#include "cpr/cpr.h"
#include "libxml/HTMLparser.h"
#include "libxml/xpath.h"

int main()
{
    cpr::Header headers = {{"User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36"}};
    cpr::Response response = cpr::Get(cpr::Url{"https://sigaa.unb.br/sigaa/public/turmas/listar.jsf"}, headers);

    return 0;
}
