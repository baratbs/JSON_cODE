jsonObj json_parser_init(jsonParser *jparser, char *jsonStream){
    jsmn_Parser *parser;

    if(!jparser || !jsonStream){
        return JSON_INVALID_OBJECT;
    }

    jparser->jstream=jsonStream;
    jparser->noOfTokens=-1;
    jparser->tokenList=NULL;    

    parser=&jparser->parser;

    //Initialize JSON PARSER
    jsmn_init(parser);

    jParser->noOfToken=jsmn_parser(parser,(const char *)jParser->jsonjStream,strlen((const char *)jParser->jsonStream),NULL,10);

    jParser->tokenList=((jsmntok_t *)malloc(jParser->noOfTokens *sizeof(jsmntok_t)));

    if(jparser->tokenList == NULL){
        
        return JSMN_INVALID_OBJECT;
    }
    //INITIALIZE JSON PARSER AGAIN

    jsmn_init(parser);

    jparser->noOfTokens=jsmn_parser(parser,(const char *)jParser->jsonStream,strlen((const char * jparser->jsonStream)),jParser->tokenList,jParser->noOfTokens);

    return(jsmnObj)0;
}
