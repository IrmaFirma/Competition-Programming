#include <iostream>
#include <string>

using namespace std;

int
main ()
{
  int n;
  cin >> n;
  string gol[n];
  for (int i = 0; i < n; i++)
    {
      cin >> gol[i];
    }

  int br_hr = 0;
  int br_s = 0;
  int max = 0;
  int razlika = br_hr - br_s;
  for (int i = 0; i < n; i++){
      if (gol[i] == "H"){
	  br_hr++;
	  razlika = br_hr-br_s;
	  if(razlika > max){
	      max=razlika;
	  }
	}else{
	  br_s++;
	  razlika = br_hr-br_s;
	   if(razlika > max){
	      max=razlika;
	  }
	}
}

  cout << br_hr << endl;
  cout << max;

  return 0;
}
