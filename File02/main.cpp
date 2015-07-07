#include <iostream>
#include <fstream>

using namespace std;

#define LINES 1000000 //0000

double diffclock(clock_t clock2, clock_t clock1)
{
  double diffticks = clock2 - clock1;
  double diffms    = diffticks/(CLOCKS_PER_SEC/1000);

  return diffms;
}

double time_write()
{
  cout << "Writing " << LINES << " lines" << endl;

  clock_t t1 = clock();

  ofstream out;
  out.open("afile.txt", ios::out|ios::trunc);

  for (int i=0; i < LINES; i++)
  {
    out << "Linha" << endl;
  }

  out.close();

  clock_t t2 = clock();

  double diff = diffclock(t2, t1);

  return diff/1000;
}

double time_read()
{
  cout << "Reading " << LINES << " lines" << endl;
  string data;

  clock_t t1 = clock();

  ifstream in;
  in.open("afile.txt", ios::in);

  for (int i=0; i < LINES; i++)
  {
    in >> data;
  }

  in.close();

  clock_t t2 = clock();

  double diff = diffclock(t2, t1);

  return diff/1000;
}

int main()
{

    cout << "Time: " << time_write() << " seg" << endl;
    cout << "Time: " << time_read() << " seg" << endl;

    return 0;
}

