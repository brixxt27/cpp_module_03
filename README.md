# cpp_module_03
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_03/issues/1)

# Exercise 00: Aaaaand... OPEN!
## Usage
```
git clone https://github.com/brixxt27/cpp_module_03.git
cd cpp_module_03/
make
./aaaaand_open
```
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp
- Forbidden functions : None
## Detail
### 앞으로 구현해야 할 ClapTrap class 의 정보
- ClapTrap 은 Gearbox software 사의 FPS 게임, BorderLands 의 마스코트인 로봇이다.

[ClapTrap에 대한 영상](https://www.youtube.com/watch?v=oHnlBzVK3Zk&t=185s)
### 과제 상세 정보 
- 처음 구현해야 하는 class 는 ClapTrap이고, 괄호 안의 지정된 값으로 초기화 되는 private 요소를 가지고 있다:
	- 생성자 인자로 받는 이름
	- Hit point (10), ClapTrap 의 생명을 나타낸다.
	- Energy point (10)
	- Attack damage(0)
- ClapTrap 을 더 실제처럼 보이게 하는 public 멤버 함수:
	- void attack(const std::string& target);
	- void takeDamage(unsigned int amount);
	- void beRepaired(unsigned int amount);
- ClapTrap 이 공격할 때, 타겟은 attack damage 만큼의 포인트를 hit point 에서 잃는다. 자기 자신을 수리할 때 amount 만큼의 hit point 를 돌려 받는다. 공격과 수리는 energy point 1씩을 소모한다. 물론 hit point 나 energy point 를 모두 잃는다면 ClapTrap 은 아무 것도 할 수 없다.
- 멤버 함수를 실행할 때마다 함수와 관련된 메시지를 출력해야 한다. 에를 들어 attack() 을 호출하면 다음과 같은 메시지를 출력해야 한다.(<> 꺾쇠 기호는 제거하여, 클래스의 상태에 맞춰 변경하여 기입해야 한다)
```
ClapTrap <name> attacks <target>, causing <damage> points of damage!
```
- Constructor 와 destructor 또한 피평가자가 보기 편하도록 메시지를 출력해줘야 한다.
- 구현한 뒤, 테스트를 위한 코드를 작성하라!

<bt> </bt>

# Exercise 01: Serena, my love! 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_03.git
cd cpp_module_03/
make
./serena_my_love
```
## Summary
- Turn-in directory : ex01/
- Files to turn in : Files from previous exercise + ScavTrap.{h, hpp}, ScavTrap.cpp
- Forbidden functions : None
## Detail
(참고: 세레나는 Sereena는 Concordia 의 Up Over Bar에서 Moxxi 를 위해 일하는 게이샤 로봇 이다)
https://borderlands.fandom.com/wiki/Sereena
- ClapTraps 은 아직 완벽하지 않기 때문에, 파생된 로봇을 만들 것이다. 그것의 이름은 ScavTrap 이고, 생성자와 소멸자를 ClapTrap 으로부터 상속 받는다. 하지만 생성자와 소멸자 그리고 attack() 은 다른 메시지를 출력해야 한다. 결국, ClapTraps 은 ScavTrap 의 다른 점을 알고 있습니다.
- 상속된 적절한 생성자/소멸자 출력을 테스트에서 보여줘야 한다는 것을 기억하세요! ScavTrap 이 만들어질 때, 프로그램은 ClapTrap 이 만들어짐으로부터 시작해야 한다. 소멸자는 반대입니다. 왜일까요?
- ScavTrap 은 ClapTrap 의 속성을 사용합니다. 결과적으로는 업데이트 하는 셈입니다. 그리고 그들을 아래와 같이 초기화 해야 합니다:
	- 생성자 인자로 들어오는 이름으로 이름 초기화
	- Hit points (100), ClapTrap 의 생명을 나타냄
	- Energy points (50)
	- Attack damage (20)
- ScavTrap 만의 특별한 멤버 함수
	- void guardGate():
		- 이 멤버 함수는 ScavTrap 이 현재 Gate keeper mode 에 있음을 알리는 메시지를 출력한다.
- 테스트를 프로그램에 추가하는 걸 잊지 마세요!
<bt> </bt>

# Exercise 02: Repetitive work
## Usage
```
git clone https://github.com/brixxt27/cpp_module_03.git
cd cpp_module_03/
make
./repetitive_work
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Files from previous exercises + FragTrap.{h, hpp}, FragTrap.cpp
- Forbidden functions : None
## Detail
- ClapTraps 을 만드는 것은 아마 당신의 신경을 건들이기 시작했을 겁니다. 이제 FragTrap 클래스를 구현해볼 겁니다. 이는 ClapTrap을 상속 받습니다. 그것은 ClapTrap 과 매우 비슷합니다. ***그러나, 그것의 생성자와 소멸자의 메시지는 달라야 합니다.*** 생성자/소멸자의 메시지는 테스트에서 보여 줘야 합니다. FragTrap 이 생성될 때, 프로그램은 ClapTrap 이 생성됨으로부터 시작해야 합니다. 소멸자는 이와 반대로 호출됩니다.
- 같은 속성을 가지고 있으나, 이번에는 다른 값을 가지고 있습니다.
	- 생성자의 인자로 들어오는 이름으로 멤버 변수 이름을 초기화한다.
	- Hit points(100), 이는 ClapTrap 의 생명을 나타낸다.
	- Energy points(100)
	- Attack damage(30)
- FragTrap 만의 특별한 기능:
	- void highFivesGuys(void):
		- 이 멤버함수는 표준 출력에 긍정적인 하이파이브 요청을 출력합니다.
- 다시 한 번 말하지만, 프로그램에 테스트를 추가하세요!
<bt> </bt>

# Exercise 03: Now it’s weird!
## Usage
```
git clone https://github.com/brixxt27/cpp_module_03.git
cd cpp_module_03/
make
./now_it_is_weird
```
## Summary
- Turn-in directory : ex03/
- Files to turn in : Files from previous exercises + DiamondTrap.{h, hpp}, DiamondTrap.cpp
- Forbidden functions : None
## Detail
- 이번에는 몬스터를 만들어볼 거야!: FragTrap 의 반쪽과 ScavTrap 의 반쪽을 가지고 있는 ClapTrap 을 만들어 보자. 그건 DiamondTrap 이라 불리고, FragTrap과 ScavTrap 을 상속 받을 거야. 이건 매우 위험해!
- DiamondTrap class는 private 멤버 변수로 name 을 가지고 있어야 해. 이 속성에 ClapTrap 기본 클래스의 변수 이름과 정확히 동일한 변수 이름(여긴 로봇의 이름 자체를 이야기하는 것이 아니다)를 지정한다.
- 위 이름 조건에 대해 명확한 예를 준다면 다음과 같다.:
	- 만약 ClapTrap 의 변수 이름이 name 이라면 DiamonTrap 의 변수 이름도 name 이어야 한다.
	- 만약 ClapTrap 의 변수 이름이 _name 이라면 DiamonTrap 의 변수 이름도 _name 이어야 한다.
- 속성과 멤버 함수는 부모 클래스 둘 중 하나를 선택하게 된다:
	- Name, 생성자 인자로 들어온 인자로 초기화 된다.
	- ClapTrap::name(생성자 인자로 들어온 문자열에 "_clap_name" 의 접미사가 붙어야 한다)
	- Hit points(FlagTrap)
	- Energy points(ScavTrap)
	- Attack damage(FragTrap)
	- attack() (ScavTrap)
- 두 부모 클래스의 특별한 함수들 외에도, DiamondTrap 은 자신만의 특수 능력을 가진다:
	- void	whoAmI();
		- 이 멤버 함수는 이름과 그것의 ClapTrap 이름을 출력해야 한다.
- 물론, DiamondTrap 의 ClapTrap 하위 개체는 만들어 질 것이고, 딱 한 번 만들어질 것이다. 맞아, 여기엔 트릭이 있어.
- 다시 한 번 말하지만, 테스트 하는 프로그램을 추가해야 한다.
```
Do you know the -Wshadow and -Wno-shadow compiler flags?
```
```
You can pass this module without doing exercise 03.
```

<bt> </bt>
