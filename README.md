# 📚 Libft - Custom Standard Library

Libft is a **custom implementation of standard C library functions**, developed as part of the 42 School curriculum. It provides essential functions for **string manipulation, memory handling, linked lists, and more**.

---

## 🚀 Features
✅ Reimplementation of standard **libc** functions.  
✅ Additional utility functions for **string, memory, and linked list operations**.  
✅ Fully written in **C**, following coding best practices.  
✅ **Modular structure**, easy to extend and integrate into other projects.  

---

## 🛠 Installation & Usage

### 1️⃣ Clone the Repository
```sh
git clone https://github.com/AlenasRed/Libft.git
cd Libft
```

### 2️⃣ Compile the Library
Run the following command to compile the library:
```sh
make
```

### 3️⃣ Use Libft in Your Project
To use Libft in another project, include `libft.h` and link the compiled library:
```sh
gcc your_program.c -L. -lft -o your_program
```

Or include it in your **Makefile**:
```makefile
LIBFT = ./libft/libft.a

all:
	gcc your_program.c $(LIBFT) -o your_program
```

---

## 📂 Project Structure
```
/Libft
├── src/             # Source files for functions
├── includes/        # Header files
├── Makefile         # Build system
├── libft.a          # Compiled library (after running `make`)
├── README.md        # Documentation
```

---

## 📌 Example Functions
### String Manipulation
```c
char *ft_strdup(const char *s);
size_t ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
```

### Memory Management
```c
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
```

### Linked List Functions
```c
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

---

## 🔥 Example Usage
```c
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = ft_strdup("Hello, Libft!");
    printf("%s\n", str);
    free(str);
    return 0;
}
```

---

## 🛠 Cleaning & Recompiling
```sh
make clean   # Remove object files
make fclean  # Remove compiled library
make re      # Recompile everything
```

---

## 📜 License
This project is **open-source** and free to use under the MIT License.

🎉 **Happy Coding!** 🚀


