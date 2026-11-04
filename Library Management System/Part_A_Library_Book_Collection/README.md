# Lab Task 05 - Part A: Library Book Collection System

## Real-world problem
A librarian needs to maintain a changing collection of books. Books may be inserted or removed at any position, swapped, sorted by ID, reversed, and displayed. A linked list supports dynamic growth and shrinkage without shifting array elements.

Each node stores an integer ID, a title/name, and a pointer to the next node. The linked list class implements InsertAt(), RemoveAt(), Swap(), Sort(), Reverse(), Print(), Insert(), Remove(), IsEmpty(), and IsNotEmpty().

## Project layout
- `Header Files/`: declarations (`linked_list.h`, `input.h`, `menu.h`, `actions.h`, `status.h`).
- `Program Files/`: `index.cpp` and separate implementation files for each operation.

## Compile and run in VS Code (Windows PowerShell + MinGW)
Run these commands from this project folder:
```powershell
$sources = Get-ChildItem -Path 'Program Files' -Filter *.cpp | ForEach-Object { $_.FullName }
g++ -std=c++98 -I 'Header Files' $sources -o lab05.exe
if ($LASTEXITCODE -eq 0) { .\lab05.exe }
```

The program starts with three sample records. Menu options let you display, insert, remove, swap, sort, reverse, check status, and exit.
