// We want to implement a mini-language to control a simple turtle-graphics sys1cm//tem.
// The language consists of single-letter commands, some followed by a single number.
// For example, the following input would draw a rectangle :
// P 2 -> select pen 2
// D   -> pen down
// W 2 -> draw west 2cm
// N 1 -> then north 1cm
// E 2 -> then east 2cm
// S 1 -> then south 1cm
// U   -> pen up
// Implement the code that parses this language.
// It should be designed so that it is simple to add new commands.

// Book solution

typedef struct {
  char cmd;
  int hasArg;
  void (*func)(int, int)
} Command;

static Command cmds[] = {
  { 'P', ARG,     doSelectPen },
  { 'U', NO_ARG,  doPenUp },
  { 'D', NO_ARG,  doPenDown },
  { 'N', ARG,     doPenDir },
  { 'E', ARG,     doPenDir },
  { 'S', ARG,     doPenDir },
  { 'W', ARG,     doPenDir }
};
