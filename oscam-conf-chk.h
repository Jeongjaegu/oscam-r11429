#ifndef OSCAM_CONF_CHK_H
#define OSCAM_CONF_CHK_H

void chk_iprange(char *value, struct s_ip **base);
void chk_caidtab(char *caidasc, CAIDTAB *ctab);
void chk_caidvaluetab(char *lbrlt, CAIDVALUETAB *tab, int32_t minvalue);
void chk_cacheex_valuetab(char *lbrlt, CECSPVALUETAB *tab);
void chk_cacheex_cwcheck_valuetab(char *lbrlt, CWCHECKTAB *tab);
void chk_cacheex_hitvaluetab(char *lbrlt, CECSPVALUETAB *tab);
void chk_tuntab(char *tunasc, TUNTAB *ttab);
void chk_services(char *labels, SIDTABS *sidtabs);
void chk_ftab(char *zFilterAsc, FTAB *ftab, const char *zType, const char *zName, const char *zFiltName);
void chk_cltab(char *classasc, CLASSTAB *clstab);
void chk_port_tab(char *portasc, PTAB *ptab);
void chk_ecm_whitelist(char *value, ECM_WHITELIST *ecm_whitelist);
void chk_ecm_hdr_whitelist(char *value, ECM_HDR_WHITELIST *ecm_hdr_whitelist);

void clear_sip(struct s_ip **sip);
void clear_ftab(struct s_ftab *ftab);
void clear_ptab(struct s_ptab *ptab);
void clear_caidtab(struct s_caidtab *ctab);
void clear_cacheextab(CECSPVALUETAB *ctab);
void clear_tuntab(struct s_tuntab *ttab);
void clear_ecm_whitelist(ECM_WHITELIST *ecm_whitelist);
void clear_ecm_hdr_whitelist(ECM_HDR_WHITELIST *ecm_hdr_whitelist);

void clone_ttab(TUNTAB *src_ttab, TUNTAB *dst_ttab);
void clone_ftab(FTAB *src_ftab, FTAB *dst_ftab);

void ftab_add_filter(FTAB *ftab, FILTER *filter);
void ecm_whitelist_add(ECM_WHITELIST *ecm_whitelist, ECM_WHITELIST_DATA *ew);
void ecm_hdr_whitelist_add(ECM_HDR_WHITELIST *ecm_hdr_whitelist, ECM_HDR_WHITELIST_DATA *eh);

#endif
