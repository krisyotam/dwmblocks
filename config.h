#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 50

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
// Order: right to left in status bar (first entry appears rightmost)
#define BLOCKS(X)                                    \
    X("", "sb-aurora", 3600, 19)                     \
    X("", "sb-doppler", 0, 13)                       \
    X("", "sb-forecast", 18000, 5)                   \
    X("", "cat /tmp/recordingicon 2>/dev/null", 0, 9) \
    X("", "sb-torrent", 20, 7)                       \
    X("", "sb-news", 0, 6)                           \
    X("", "sb-mailbox", 180, 12)                     \
    X("", "sb-pacpackages", 0, 8)                    \
    X("", "sb-disk", 60, 21)                         \
    X("", "sb-nettraf", 1, 16)                       \
    X("", "sb-internet", 5, 4)                       \
    X("", "sb-volume", 0, 10)                        \
    X("", "sb-battery", 5, 3)                        \
    X("", "sb-clock", 60, 1)                         \
    X("", "sb-dashboard", 0, 11)

#endif  // CONFIG_H
