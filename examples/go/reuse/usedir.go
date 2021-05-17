// Code generated by re2c, DO NOT EDIT.
//line "go/reuse/usedir.re":1
//go:generate re2go $INPUT -o $OUTPUT

// This example shows how to combine reusable re2c blocks: two blocks
// ('colors' and 'fish') are merged into one. The 'salmon' rule occurs
// in both blocks; the 'fish' block takes priority because it is used
// earlier. Default rule * occurs in all three blocks; the local (not
// inherited) definition takes priority.

package main

import "testing"

const (
	Color = iota
	Fish
	Dunno
)

//line "go/reuse/usedir.re":22


//line "go/reuse/usedir.re":27


func lex(str string) int {
	var cursor, marker int
	
//line "go/reuse/usedir.go":31
{
	var yych byte
	yych = str[cursor]
	switch (yych) {
	case 'e':
		goto yy4
	case 'h':
		goto yy5
	case 'm':
		goto yy6
	case 'r':
		goto yy7
	case 's':
		goto yy8
	default:
		goto yy2
	}
yy2:
	cursor += 1
yy3:
//line "go/reuse/usedir.re":41
	{ return Dunno }
//line "go/reuse/usedir.go":54
yy4:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'e':
		goto yy9
	default:
		goto yy3
	}
yy5:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'a':
		goto yy11
	default:
		goto yy3
	}
yy6:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'a':
		goto yy12
	default:
		goto yy3
	}
yy7:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'e':
		goto yy13
	default:
		goto yy3
	}
yy8:
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'a':
		goto yy14
	default:
		goto yy3
	}
yy9:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'l':
		goto yy15
	default:
		goto yy10
	}
yy10:
	cursor = marker
	goto yy3
yy11:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'd':
		goto yy17
	default:
		goto yy10
	}
yy12:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'g':
		goto yy18
	default:
		goto yy10
	}
yy13:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'd':
		goto yy19
	default:
		goto yy10
	}
yy14:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'l':
		goto yy21
	default:
		goto yy10
	}
yy15:
	cursor += 1
//line "go/reuse/usedir.re":26
	{ return Fish }
//line "go/reuse/usedir.go":157
yy17:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'd':
		goto yy22
	default:
		goto yy10
	}
yy18:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'e':
		goto yy23
	default:
		goto yy10
	}
yy19:
	cursor += 1
//line "go/reuse/usedir.re":21
	{ return Color }
//line "go/reuse/usedir.go":180
yy21:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'm':
		goto yy24
	default:
		goto yy10
	}
yy22:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'o':
		goto yy25
	default:
		goto yy10
	}
yy23:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'n':
		goto yy26
	default:
		goto yy10
	}
yy24:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'o':
		goto yy27
	default:
		goto yy10
	}
yy25:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		goto yy28
	default:
		goto yy10
	}
yy26:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 't':
		goto yy29
	default:
		goto yy10
	}
yy27:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'n':
		goto yy15
	default:
		goto yy10
	}
yy28:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'k':
		goto yy15
	default:
		goto yy10
	}
yy29:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'a':
		goto yy19
	default:
		goto yy10
	}
}
//line "go/reuse/usedir.re":42

}

func TestLex(t *testing.T) {
	if lex("salmon") != Fish || lex("what?") != Dunno {
		t.Errorf("lex failed")
	}
}