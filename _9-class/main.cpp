///////////////////////////////////////////////////
/*-----------------------------------------------
//new & delete in C++?

new ==>> request for memory allocation in heap
delete ==>> erase that memory

new (malloc, calloc, realloc, ...) so dynamic memory allocations
delete (free)
-------------------------------------------------*/
///////////////////////////////////////////////////
/* Ex_1
#include <iostream>

//using namespace std;

int main()                                      // General address where program executes
{                                               // Scope

    int *ptr1 = NULL;
    ptr1 = new int;

    *ptr1 = 10;

    std::cout<< "*ptr1 : " << *ptr1 << std::endl;

    delete ptr1;

    return 0
} */
/////////////////////////////////////
/* Ex_2
#include <cstring>
#include <iostream>

class Data_Tester {
private:
  int mike;
  int oscar;
  int papa;
  void func_3();

public:
  int lima;
  int zulu;
  void func_1() {
    std::cout << "Func_1 started" << std::endl;
    func_2();
    func_3();
  }

protected:
  int bravo;
  void func_2();
};

void Data_Tester::func_2() { std::cout << "Func_2 started" << std::endl; }

void Data_Tester::func_3() { std::cout << "Func_3 started" << std::endl; }

int main() {
  Data_Tester dataTester;

  dataTester.lima = 5;
  dataTester.zulu = 6;

  dataTester.func_1();

  // Cannot access this class member cause of the private value
  // dataTester.func_2();

  return 0;
} */
/////////////////////////////////////
/* Ex_3 */
#include <cstring>
#include <iostream>

class classMade {
public:
private:
};

int main() {
  std::cout << "Test" << std::endl;
  return 0;
}
/////////////////////////////////////
/* Ex_4
#include <cstring>
#include <iostream>

#define IGNITION 1

class Automobile {
public:
  int currentGear_ = 0;
  bool engineRunning_;

  // Constructor
  Automobile(std::string make, std::string model, int year)
      : make_(make), model_(model), year_(year), engineRunning_(false) {}

  // Public methods for door controls
  void LockDoors() {
    std::cout << "Doors are locked." << std::endl;
    doorsLocked_ = true;
  }

  void UnlockDoors() {
    std::cout << "Doors are unlocked." << std::endl;
    doorsLocked_ = false;
  }

  // Public methods for window controls
  void OpenWindows() {
    std::cout << "Windows are open." << std::endl;
    windowsOpen_ = true;
  }

  void CloseWindows() {
    std::cout << "Windows are closed." << std::endl;
    windowsOpen_ = false;
  }

  // Public getter methods for make, model, and year
  std::string GetMake() const { return make_; }

  std::string GetModel() const { return model_; }

  int GetYear() const { return year_; }

  void StartEngine() {
    if (!engineRunning_) {
      std::cout << "Engine is started." << std::endl;
      engineRunning_ = true;
    } else {
      std::cout << "Engine is already running." << std::endl;
    }
  }

  void StopEngine() {
    if (engineRunning_) {
      std::cout << "Engine is stopped." << std::endl;
      engineRunning_ = false;
      currentGear_ = 0; // Reset gear when the engine stops
    } else {
      std::cout << "Engine is already stopped." << std::endl;
    }
  }

private:
  std::string make_;
  std::string model_;
  int year_;
  bool doorsLocked_ = false;
  bool windowsOpen_ = false;
};

// Derived class for a specific car model
class SpecificCar : public Automobile {
public:
  // Constructor
  SpecificCar(std::string make, std::string model, int year)
      : Automobile(make, model, year) {}

  // Public method specific to this car model
  void PlayMusic() {
    if (engineRunning_) {
      std::cout << "Playing music in the " << GetMake() << " " << GetModel()
                << "." << std::endl;
    } else {
      std::cout << "Start the engine to play music." << std::endl;
    }
  }

  void ChangeGear(int gear) {
    if (engineRunning_) {
      std::cout << "Changed to gear " << gear << "." << std::endl;
      currentGear_ = gear;
    } else {
      std::cout << "Start the engine before changing gears." << std::endl;
    }
  }
};

int main() {
  SpecificCar car("Toyota", "Corolla", 2023);

  car.StartEngine();
  car.ChangeGear(IGNITION);
  car.LockDoors();
  car.OpenWindows();
  car.PlayMusic();
  car.StopEngine();

  return 0;
} */