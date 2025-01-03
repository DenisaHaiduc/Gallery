#include <iostream>
#include"Service.h"
#include"Repo.h"
#include"UI.h"
using namespace std;

int main()
{
    Repo repo;
    Service service(repo);
    UI ui(service);
    ui.run();

    return 0;
}
