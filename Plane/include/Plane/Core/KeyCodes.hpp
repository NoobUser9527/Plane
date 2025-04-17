#pragma once

#include <cstdint>

namespace Hazel
{
    using KeyCode = uint16_t;

    namespace Key
    {
        enum class MyEnum : uint16_t
        {
            // From glfw3.h
            Space = 32,      // 空格键
            Apostrophe = 39, // 单引号键
            Comma = 44,      // 逗号键
            Minus = 45,      // 减号键
            Period = 46,     // 句号键
            Slash = 47,      // 斜杠键

            D0 = 48, // 数字键0
            D1 = 49, // 数字键1
            D2 = 50, // 数字键2
            D3 = 51, // 数字键3
            D4 = 52, // 数字键4
            D5 = 53, // 数字键5
            D6 = 54, // 数字键6
            D7 = 55, // 数字键7
            D8 = 56, // 数字键8
            D9 = 57, // 数字键9

            Semicolon = 59, // 分号键
            Equal = 61,     // 等号键

            A = 65, // 字母键A
            B = 66, // 字母键B
            C = 67, // 字母键C
            D = 68, // 字母键D
            E = 69, // 字母键E
            F = 70, // 字母键F
            G = 71, // 字母键G
            H = 72, // 字母键H
            I = 73, // 字母键I
            J = 74, // 字母键J
            K = 75, // 字母键K
            L = 76, // 字母键L
            M = 77, // 字母键M
            N = 78, // 字母键N
            O = 79, // 字母键O
            P = 80, // 字母键P
            Q = 81, // 字母键Q
            R = 82, // 字母键R
            S = 83, // 字母键S
            T = 84, // 字母键T
            U = 85, // 字母键U
            V = 86, // 字母键V
            W = 87, // 字母键W
            X = 88, // 字母键X
            Y = 89, // 字母键Y
            Z = 90, // 字母键Z

            LeftBracket = 91,
            /* [ */ // 左方括号键
            Backslash = 92,
            /* \ */ // 反斜杠键
            RightBracket = 93,
            /* ] */ // 右方括号键
            GraveAccent = 96,
            /* ` */ // 重音符键

            World1 = 161,
            /* non-US #1 */ // 非美式键盘#1键
            World2 = 162,
            /* non-US #2 */ // 非美式键盘#2键

            /* Function keys */
            Escape = 256,      // ESC键
            Enter = 257,       // 回车键
            Tab = 258,         // TAB键
            Backspace = 259,   // 退格键
            Insert = 260,      // 插入键
            Delete = 261,      // 删除键
            Right = 262,       // 右箭头键
            Left = 263,        // 左箭头键
            Down = 264,        // 下箭头键
            Up = 265,          // 上箭头键
            PageUp = 266,      // PAGE UP键
            PageDown = 267,    // PAGE DOWN键
            Home = 268,        // HOME键
            End = 269,         // END键
            CapsLock = 280,    // 大写锁定键
            ScrollLock = 281,  // 滚动锁定键
            NumLock = 282,     // 数字锁定键
            PrintScreen = 283, // PRINT SCREEN键
            Pause = 284,       // PAUSE键
            F1 = 290,          // F1键
            F2 = 291,          // F2键
            F3 = 292,          // F3键
            F4 = 293,          // F4键
            F5 = 294,          // F5键
            F6 = 295,          // F6键
            F7 = 296,          // F7键
            F8 = 297,          // F8键
            F9 = 298,          // F9键
            F10 = 299,         // F10键
            F11 = 300,         // F11键
            F12 = 301,         // F12键
            F13 = 302,         // F13键
            F14 = 303,         // F14键
            F15 = 304,         // F15键
            F16 = 305,         // F16键
            F17 = 306,         // F17键
            F18 = 307,         // F18键
            F19 = 308,         // F19键
            F20 = 309,         // F20键
            F21 = 310,         // F21键
            F22 = 311,         // F22键
            F23 = 312,         // F23键
            F24 = 313,         // F24键
            F25 = 314,         // F25键

            /* Keypad */
            KP0 = 320,        // 小键盘0
            KP1 = 321,        // 小键盘1
            KP2 = 322,        // 小键盘2
            KP3 = 323,        // 小键盘3
            KP4 = 324,        // 小键盘4
            KP5 = 325,        // 小键盘5
            KP6 = 326,        // 小键盘6
            KP7 = 327,        // 小键盘7
            KP8 = 328,        // 小键盘8
            KP9 = 329,        // 小键盘9
            KPDecimal = 330,  // 小键盘小数点
            KPDivide = 331,   // 小键盘除号
            KPMultiply = 332, // 小键盘乘号
            KPSubtract = 333, // 小键盘减号
            KPAdd = 334,      // 小键盘加号
            KPEnter = 335,    // 小键盘回车键
            KPEqual = 336,    // 小键盘等号键

            LeftShift = 340,    // 左Shift键
            LeftControl = 341,  // 左Ctrl键
            LeftAlt = 342,      // 左Alt键
            LeftSuper = 343,    // 左Super键
            RightShift = 344,   // 右Shift键
            RightControl = 345, // 右Ctrl键
            RightAlt = 346,     // 右Alt键 // 右Super键
            RightSuper = 347,   // 右Super键
            Menu = 348          // 菜单键
        };
    }
}