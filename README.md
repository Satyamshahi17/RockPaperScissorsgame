# 🎮 Rock, Paper, Scissors – C Console Game

## 📄 Description

This is a simple **Rock, Paper, Scissors** game written in C, where a user competes against the computer in 3 rounds. The player and computer each choose between "ROCK", "PAPER", or "SCISSOR", and points are awarded based on the outcome of each round.

The game follows standard rules:
- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock
- Same choice = Tie

## 🎮 Features

- 3 rounds of gameplay per match
- Score is tracked and displayed
- Player vs Computer logic with random moves
- Option to play again or exit
- Friendly prompts and instructions

## 🧠 Gameplay Instructions

1. Type your name to start the game.
2. When you see `"GO!"`, type one of the following in **ALL CAPITALS**:
   - `ROCK`
   - `PAPER`
   - `SCISSOR`
3. The computer will randomly select its move.
4. Points are calculated:
   - Win: +1 point
   - Tie: Both get +1
5. After 3 rounds, the winner is declared based on the score.

## 🔁 Looping

- After the first game ends, you're asked:
  - Press `1` to play again
  - Press `2` to exit the game

## ⚠️ Important Notes

- The computer move is randomized using the system clock (`srand(time(NULL))`).
- Input must be typed exactly as instructed (`ROCK`, `PAPER`, or `SCISSOR`).
- The game does not validate spelling or capitalization.

## 🛠️ Compilation

To compile and run this C program, use any C compiler like GCC:

```bash
gcc game.c -o game
./game
