struct vid;
struct SREGS;
union REGS;
extern char backchar (int f, int n, int k);
extern char forwchar (int f, int n, int k);
extern char move_ptr (struct WINDOW *wp, long len, char dot, char fix, char rel);
extern char wind_on_dot (struct WINDOW *wp);
extern char gotobob (void);
extern char gotoeob (void);
extern char forwline (int f, int n, int k);
extern char backline (int f, int n, int k);
extern char forwpage (int f, int n, int k);
extern char backpage (int f, int n, int k);
extern char setmark (void);
extern char swapmark (void);
extern char gotoline (int f, int n, int k);
extern char usebuffer (void);
extern char use_buffer (void);
extern char _usebuffer (char *bufn);
extern char killbuffer (void);
extern char _killbuffer (char *bufn);
extern char listbuffers (void);
extern char showsavebuf (void);
extern char popblist (void);
extern char makelist (void);
extern char addline (char *text);
extern char anycb (void);
extern struct BUFFER *bfind (char *bname, int cflag);
extern struct BUFFER *bcreate (char *bname);
extern char bclear (struct BUFFER *bp);
extern char next_buf (void);
extern char prev_buf (void);
extern char yank_buffer (void);
extern char _yankbuffer (char *bufn);
extern char buffername (void);
extern char killablebufs (struct BUFFER *bp);
extern char onebuf (struct BUFFER *bp);
extern void funky_name (char *bname, int n);
extern char pickone (void);
extern char bufsizlock (void);
extern void b_append_l (struct BUFFER *buf_p, struct LINE *lp);
extern char b_append_c (struct BUFFER *buf_p, unsigned char ch);
extern void save_buf_init (void);
extern void save_buf_home (void);
extern unsigned short get_save_char (void);
extern void vtinit (void);
extern void vtfree (void);
extern void vttidy (void);
extern void vtmove (int row, int col);
extern void vtputc (char c);
extern char vtputd (struct WINDOW *wp, int row);
extern void bin_to_text (char *bin_buf, char *txt_buf, unsigned int len, struct ROW_FMT *fmt_ptr);
extern unsigned short get_int (unsigned char *w_buf);
extern unsigned long get_long (unsigned char *w_buf);
extern double get_double (unsigned char *w_buf);
extern unsigned int fill_buf (struct WINDOW *wp, struct LINE *lin, unsigned int lin_off, char *w_buff, unsigned int cnt);
extern void vteeol (void);
extern void update (void);
extern unsigned int get_currow (struct WINDOW *wp);
extern unsigned int get_curcol (struct WINDOW *wp);
extern void mem_line (int row, struct vid *vvp);
extern void ucopy (struct vid *vvp, struct vid *pvp);
extern void uline (int row, struct vid *vvp, struct vid *pvp);
extern void modeline (struct WINDOW *wp);
extern void writ_echo (char *buf);
extern char print (void);
extern char to_ebcdic (char ch);
extern void eerase (void);
extern char eyesno (char *sp);
extern char ereply (char *fp, char *buf, int nbuf, char *arg);
extern char eread (char *fp, char *buf, int nbuf, int flag, char *ap);
extern int getxtra (struct SYMBOL *sp1, struct SYMBOL *sp2, int cpos);
extern void eformat (char *fp, char *ap);
extern void eputi (int i, int r);
extern void eputs (char *s);
extern void eputc (int c);
extern void err_echo (char *buf);
extern char bindtokey (void);
extern char extend (int f, int n, int k);
extern char help (void);
extern void sort_buf (struct BUFFER *b_ptr, int cnt);
extern char wallchart (int f, int n, int k);
extern void check_extend (char *sfname);
extern char *flook (char *fname, int hflag);
extern char load_extend (void);
extern int find_keyval (char *name);
extern char fileread (void);
extern char fileinsert (void);
extern char file_visit (int f, int n, int k);
extern char viewfile (void);
extern char filevisit (void);
extern char load_file (char *fname, unsigned long start, unsigned long end);
extern char readin (char *fname, unsigned long start, unsigned long end);
extern void makename (char *bname, char *fname);
extern char filewrite (void);
extern char filesave (void);
extern char writeout (char *fn, unsigned long start, unsigned long end, unsigned short mode);
extern char filename (void);
extern char parse_f_name (char *fn, unsigned long *start, unsigned long *end);
extern char ffropen (char *fn);
extern unsigned long file_len (void);
extern char ffwopen (char *fn, int mode);
extern char ffclose (void);
extern char ffputline (char *buf, int nbuf);
extern char ffgetline (char *buf, unsigned int nbuf, unsigned int *rbuf);
extern unsigned long ffseek (unsigned long posn);
extern char fbackupfile (char *fname);
extern void adjustcase (char *fn);
extern void init_fmt (void);
extern int getkey (void);
extern int getctl (void);
extern void keyname (char *cp, int k);
extern struct LINE *lalloc (int size);
extern void lfree (struct LINE *lp);
extern void lchange (int flag);
extern struct LINE *l_break_in_two (struct LINE *lp, unsigned int lo, unsigned int extra);
extern char linsert (int n, unsigned char c);
extern char ldelete (unsigned long n_bytes, int kflag);
extern void lreplace (int n, char c);
extern char lrepl_str (int plen, struct LINE *rstr, struct LINE *mstr);
extern void l_fix_up (struct LINE *line);
extern void main (int argc, char **argv);
extern char execute (int c, int f, int n);
extern void edinit (char *bname);
extern char flush_all (void);
extern char flushnquit (int f, int n, int k);
extern char quit (int f, int n, int k);
extern char ctlxlp (int f, int n, int k);
extern char ctlxrp (int f, int n, int k);
extern char ctlxe (int f, int n, int k);
extern char ctrlg (int f, int n, int k);
extern char showversion (int f, int n, int k);
extern void _lowercase (char *s);
extern char autosave (void);
extern char showcpos (int f, int n, int k);
extern char twiddle (void);
extern char quote (int f, int n, int k);
extern char insert_toggle (void);
extern char selfinsert (int f, int n, int k);
extern char insertunit (int f, int n, int k);
extern char fill_out (void);
extern char dec_chr_ok (char *char_buf, char *max_str, char chr, char pos);
extern void set_mode_vars (void);
extern char asciimode (void);
extern char ebcdicmode (void);
extern char floatmode (void);
extern char decimalmode (void);
extern char hexmode (void);
extern char octalmode (void);
extern char binarymode (void);
extern char dispshift (int f, int n, int k);
extern char forwdel (int f, int n, int k);
extern char backdel (int f, int n, int k);
extern char dispsize1 (void);
extern char dispsize2 (void);
extern char dispsize4 (void);
extern char dispswapbyte (int f, int n, int k);
extern char yank (int f, int n, int k);
extern char linkwind (void);
extern void bad_key (int key);
extern char n_way_combine (int f, int n, int k);
extern char n_way_split (int f, int n, int k);
extern void wind_on_dot_all (void);
extern char killregion (int f, int n, int k);
extern char copyregion (int f, int n, int k);
extern char getregion (struct reg *rp);
extern char save_region (int f, int n, int k);
extern char forwsearch (void);
extern char backsearch (void);
extern char searchagain (void);
extern char queryrepl (int f, int n, int k);
extern char replaceit (void);
extern char forwsrch (void);
extern char backsrch (void);
extern char readpattern (void);
extern char recall (void);
extern void next_pat (void);
extern char compare (void);
extern char spawncli (int f, int n, int k);
extern struct SYMBOL *symlookup (char *cp);
extern int symhash (char *cp);
extern void keymapinit (void);
extern void keyadd (short new, char (*funcp) (void), char *name, int modify);
extern void keydup (int new, char *name);
extern void ttinit (void);
extern void tttidy (void);
extern void ttmove (int row, int col);
extern void tteeol (void);
extern void tteeop (void);
extern void ttbeep (void);
extern void asciiparm (int n);
extern void ttnowindow (void);
extern void ttcolor (int color);
extern void ttopen (void);
extern void ttclose (void);
extern void ttflush (void);
extern int ttputc (int c);
extern void putline (int row, int startcol, int stringsize, char *string);
extern int ttkeyready (void);
extern int ttgetc (void);
extern void ttraw (void);
extern void ttcooked (void);
extern void set_crt_type (void);
extern void ungetkey (int k);
extern int getkbd (void);
extern void ttykeymapinit (void);
extern char *keystrings (int key);
extern void is_wang (void);
extern int getsysconfig (union REGS *outregs, struct SREGS *segregs);
extern char getscreenstate (void);
extern char reposition (void);
extern char nextwind (void);
extern char prevwind (void);
extern char mvdnwind (int f, int n, int k);
extern char mvupwind (int f, int n, int k);
extern char onlywind (void);
extern char delwind (void);
extern char splitwind (void);
extern char enlargewind (int f, int n, int k);
extern char shrinkwind (int f, int n, int k);
extern struct WINDOW *wpopup (void);
extern char refresh (void);
extern char screen_rows (int f, int n, int k);
extern char backunit (int f, int n, int k);
extern char forwunit (int f, int n, int k);
extern char delfunit (int f, int n, int k);
extern char delbunit (int f, int n, int k);
