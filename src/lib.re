open Cohttp
open Cohttp_lwt_unix

type req = {
    params: Map.Make(String).t(string)
}

type route = {
    method: Code.meth,
    match: string,
    handler: (req) => unit
}

type server = {
    routes: list(route)
}

let createServer = () => {

}