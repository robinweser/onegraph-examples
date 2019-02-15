# SpotDJ

A serverless web app that enables anyone with a Spotify account to listen for someone else's Spotify music being played live.

It's built on top of Spotify using OneGraph for a serverless GraphQL API and for authentication.

Try it live at https://spotdj.onegraphapp.com

![Demo](demo.gif)

## Running Project Locally

Install dependencies:

```
yarn
```

Grab the OneGraph schema 
=======
Send introspection query to access the queries provided by OneGraph. This will generate a graphql_schema.json which will be used to safely type your GraphQL queries/mutations.

```
yarn send-introspection-query https://serve.onegraph.com/dynamic?app_id=bafd4254-c229-48c2-8c53-44a01477a43e
```

Start the server:

```
yarn server

# in another tab
yarn start
```

View the app at http://localhost:8000. Running in this environment provides hot reloading and support for routing; just edit and save the file and the browser will automatically refresh.


## Built With
* [OneGraph](https://www.onegraph.com/) - Handle APIs and Authentication
* [PeerJS](https://peerjs.com/) - WebRTC
* [React-Motion](https://github.com/chenglou/react-motion) - UI Animation

## License
This project is licensed under the MIT License
