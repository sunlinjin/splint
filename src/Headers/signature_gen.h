/*
** Inserted at beginning of c files generated by bison
** REMEMBER:  Change bison.reset too.
*/

/*@-allmacros@*/
/*@+boolint@*/
/*@+charint@*/
/*@-macroparams@*/
/*@-macroundef@*/
/*@-unreachable@*/
/*@-macrospec@*/
/*@-varuse@*/
/*@+ignorequals@*/
/*@-macrostmt@*/
/*@-noeffect@*/
/*@-shadow@*/
/*@-exitarg@*/
/*@-macroredef@*/
/*@-uniondef@*/
/*@-compdef@*/
/*@-matchfields@*/
/*@-exportlocal@*/
/*@-evalorderuncon@*/
/*@-exportheader@*/
/*@-typeuse@*/
/*@-redecl@*/
/*@-redef@*/
/*@-noparams@*/
/*@-ansireserved@*/
/*@-fielduse@*/
/*@-ifblock@*/
/*@-elseifcomplete@*/
/*@-whileblock@*/
/*@-forblock@*/
/*@-branchstate@*/
/*@-readonlytrans@*/
/*@-namechecks@*/
/*@-usedef@*/
/*@-systemunrecog@*/
/*@-dependenttrans@*/
/*@-unqualifiedtrans@*/
/*@-nullassign@*/

/* < end of bison.head > */

typedef union {
  ltoken ltok;  /* a leaf is also an ltoken */
  unsigned int count;
  /*@only@*/  ltokenList ltokenList;
  /*@only@*/  opFormNode opform;
  /*@owned@*/ sigNode signature;
  /*@only@*/  nameNode name;
  /*@owned@*/ lslOp operator;
  /*@only@*/  lslOpList operators;
} YYSTYPE;
#define	LST_SIMPLEID	258
#define	LST_LOGICALOP	259
#define	LST_EQOP	260
#define	LST_SIMPLEOP	261
#define	LST_MAPSYM	262
#define	LST_FIELDMAPSYM	263
#define	LST_MARKERSYM	264
#define	LST_ifTOKEN	265
#define	LST_thenTOKEN	266
#define	LST_elseTOKEN	267
#define	LST_LBRACKET	268
#define	LST_RBRACKET	269
#define	LST_SELECTSYM	270
#define	LST_SEPSYM	271
#define	LST_OPENSYM	272
#define	LST_CLOSESYM	273
#define	LST_COLON	274
#define	LST_COMMA	275
#define	LST_EOL	276
#define	LST_COMMENTSYM	277
#define	LST_WHITESPACE	278
#define	LST_QUANTIFIERSYM	279
#define	LST_EQUATIONSYM	280
#define	LST_EQSEPSYM	281
#define	LST_COMPOSESYM	282
#define	LST_LPAR	283
#define	LST_RPAR	284
#define	LST_assertsTOKEN	285
#define	LST_assumesTOKEN	286
#define	LST_byTOKEN	287
#define	LST_convertsTOKEN	288
#define	LST_enumerationTOKEN	289
#define	LST_equationsTOKEN	290
#define	LST_exemptingTOKEN	291
#define	LST_forTOKEN	292
#define	LST_generatedTOKEN	293
#define	LST_impliesTOKEN	294
#define	LST_includesTOKEN	295
#define	LST_introducesTOKEN	296
#define	LST_ofTOKEN	297
#define	LST_partitionedTOKEN	298
#define	LST_traitTOKEN	299
#define	LST_tupleTOKEN	300
#define	LST_unionTOKEN	301
#define	LST_BADTOKEN	302

