int json_Parser_deinit(json_Parser *jParser){
    jParser->jsonStream=NULL;
    jparser->noOfToken=-1;
    free(jParser->tokenList);
    jParser->tokenList=NULL;
    return 0;
}
