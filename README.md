# Exam 5 - School 1337

This repository contains the solutions for Exam 5 at School 1337. The exam consists of three exercises focused on C++ programming, specifically dealing with classes, polymorphism, and the Coplien form.

## Table of Contents

- [Overview](#overview)
- [Technologies Used](#technologies-used)
- [Setup Instructions](#setup-instructions)
- [Exercise 1: cpp_module_00](#exercise-1-cpp_module_00)
  - [Description](#description)
  - [Files](#files)
  - [Usage](#usage)
- [Exercise 2: cpp01_02](#exercise-2-cpp01_02)
  - [Description](#description)
  - [Files](#files)
  - [Usage](#usage)
- [Exercise 3: cpp_module_02](#exercise-3-cpp_module_02)
  - [Description](#description)
  - [Files](#files)
  - [Usage](#usage)
- [Exam Preparation Tips](#exam-preparation-tips)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Overview

Exam 5 at School 42 tests a range of C++ programming skills, focusing on class design, inheritance, polymorphism, and best practices in software development. Each exercise builds on the previous one, adding complexity and depth to the concepts learned.

## Technologies Used

- C++
- Git

## Setup Instructions

1. **Clone Repository**

   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```
2. **Build and Run**

Navigate to each exercise directory and follow the instructions provided to compile and run the code.

## Exercise 1: cpp_module_00

### Description

This exercise involves creating a `Warlock` class in C++ using the Coplien form. The class has private attributes `name` and `title`, with appropriate getters and setters. The `Warlock` class cannot be copied or instantiated without a name and title.

### Files

- `Warlock.cpp`
- `Warlock.hpp`

### Requirements

- The `Warlock` class must follow the Coplien form.
- Private attributes:
  - `name` (string)
  - `title` (string)
- Public member functions:
  - `getName()` - returns a reference to constant string.
  - `getTitle()` - returns a reference to constant string.
  - `setTitle(const std::string&)` - sets the title.
  - `introduce() const` - introduces the Warlock with a message.

### Usage

1. **Compile**

   ```bash
   g++ -Wall -Wextra -Werror -std=c++98 Warlock.cpp -o warlock
   ```
2. **Run**

   ```bash
   ./warlock
   ```

## Exercise 2: cpp_module_01

### Description

This exercise extends the Warlock class by introducing the abstract classes ASpell and ATarget. The Warlock can learn and forget spells, and launch them at targets. The exercise prohibits the use of switch statements and requires proper implementation of polymorphism.

### Files

- `Warlock.cpp`
- `Warlock.hpp`
- `ASpell.hpp`
- `ASpell.cpp`
- `ATarget.hpp`
- `ATarget.cpp`
- `Fwoosh.hpp`
- `Fwoosh.cpp`
- `Dummy.hpp`
- `Dummy.cpp`


### Usage

1. **Compile**

   ```bash
   g++ -Wall -Wextra -Werror -std=c++98 *.cpp -o warlock
   ```
2. **Run**

   ```bash
   ./warlock
   ```

## Exercise 3: cpp_module_02

### Description

This exercise adds more complexity by introducing additional spells (Fireball, Polymorph) and targets (BrickWall). It also includes the SpellBook and TargetGenerator classes. The Warlock class uses a SpellBook to manage its spells, and the TargetGenerator creates targets for the Warlock to attack.

### Files

- `Warlock.cpp`
- `Warlock.hpp`
- `ASpell.hpp`
- `ASpell.cpp`
- `ATarget.hpp`
- `ATarget.cpp`
- `Fwoosh.hpp`
- `Fwoosh.cpp`
- `Dummy.hpp`
- `Dummy.cpp`
- `Fireball.hpp`
- `Fireball.cpp`
- `Polymorph.hpp`
- `Polymorph.cpp`
- `BrickWall.hpp`
- `BrickWall.cpp`
- `SpellBook.hpp`
- `SpellBook.cpp`
- `TargetGenerator.hpp`
- `TargetGenerator.cpp`

### Usage

1. **Compile**

   ```bash
   g++ -Wall -Wextra -Werror -std=c++98 *.cpp -o warlock
   ```
2. **Run**

   ```bash
   ./warlock
   ```

## Exam Preparation Tips

- Understand the Basics: Ensure you have a strong understanding of C++ programming, especially class design and inheritance.
- Practice: Work on similar problems to get comfortable with the types of questions that may appear in the exam.
- Review: Go through your previous exercises and projects to refresh your knowledge and skills.
- Stay Calm: Manage your time effectively during the exam and stay calm under pressure.


