#include <iostream>
#include "CoucheHttp.h"
#include "rechercheInformation.h"
#include <sstream>
#include <math.h>
#include "excel.h"
using namespace std;

int main()
{
    Header head;
    head.setHost("http://travian.fr");
    head.setPath("/");

    head.setMethod("GET");

    head.setAccept("text/html,application/xhtml+xml,application/xml;q=0.9,*//*;q=0.8");
    head.setUserAgent("Mozilla/5.0 (Windows NT 6.1; WOW64; rv:21.0) Gecko/20100101 Firefox/21.0");
    head.setAccept_language("fr,fr-fr;q=0.8,en-us;q=0.5,en;q=0.3");
    head.setAccept_encoding("gzip, deflate");
    head.setConnexion("keep-alive");

    Http* http=new Http(head);

    std::string page=http->getPage(&head);
    std::cout<<page<<std::endl;
    return 0;
}